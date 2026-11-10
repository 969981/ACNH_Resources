
void FUN_0014fc8c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  
  if ((*(byte *)(*param_1 + 0xf63) >> 2 & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0x41c);
  plVar1 = param_1 + 0x1b;
  if ((uVar2 & 4) != 0) {
    plVar1 = param_1 + 0x21;
  }
  if ((uVar2 & 0x20) != 0) {
    plVar1 = param_1 + 0x2d;
  }
  if ((uVar2 & 0x40) != 0) {
    plVar1 = param_1 + 0x25;
  }
  FUN_0014d430(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",*plVar1,param_1 + 0x11,
               param_1[0x32],param_1[0xc]);
  return;
}

