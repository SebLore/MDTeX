#pragma once

mdTest = R"
# Title of the Document

## Section 1

This is a paragraph with *italic* and **bold** text.

### Subsection 1.1

- Item 1
- Item 2
- Item 3

#### Subsubsection 1.1.1

Here is an inline equation: $E=mc^2$

And a displayed equation:

$$
\int_{a}^{b} x^2 \,dx
$$

## Section 2

A [link](https://example.com) and an image:

![Alt text](image.png)

> This is a blockquote.

Here is some `inline code`, and a code block:

```python
def hello():
    print("Hello, World!")```
";

const char * laTest = R"

\documentclass{article}
\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{hyperref}

\begin{document}

\title{Title of the Document}
\maketitle

\section{Section 1}

This is a paragraph with \textit{italic} and \textbf{bold} text.

\subsection{Subsection 1.1}

\begin{itemize}
    \item Item 1
    \item Item 2
    \item Item 3
\end{itemize}

\subsubsection{Subsubsection 1.1.1}

Here is an inline equation: \(E=mc^2\)

And a displayed equation:

\[
\int_{a}^{b} x^2 \,dx
\]

\section{Section 2}

A \href{https://example.com}{link} and an image:

\includegraphics{image.png}

\begin{quote}
This is a blockquote.
\end{quote}

Here is some \texttt{inline code}, and a code block:

\begin{verbatim}
def hello():
    print("Hello, World!")
\end{verbatim}

\end{document}
";



int main(){

    return 0;
}

