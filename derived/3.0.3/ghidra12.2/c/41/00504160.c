
void _INIT_485(void)

{
  if ((DAT_04c73128 & 1) == 0) {
    DAT_04c73118 = 0;
    DAT_04c73120 = 0;
    DAT_04c73128 = 1;
  }
  return;
}

