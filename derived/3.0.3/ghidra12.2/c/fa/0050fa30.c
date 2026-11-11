
void _INIT_565(void)

{
  if ((DAT_04c73df8 & 1) == 0) {
    DAT_04c73de8 = 0;
    DAT_04c73df0 = 0;
    DAT_04c73df8 = 1;
  }
  return;
}

