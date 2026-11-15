
void FUN_0234b2c4(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  lVar4 = *(long *)(param_1 + 0x1150);
  *(char *)(param_1 + 0xc1af) = (char)param_2;
  if (lVar4 != 0) {
    uVar5 = 0xffffffffffff;
    if ((*(long *)(param_1 + 0x1180) != 0) && (*(long *)(param_1 + 0x1160) != 0)) {
      lVar1 = 0x48;
      if (*(uint *)(param_1 + 0x1178) < 10) {
        lVar1 = 0;
      }
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x1180) + lVar1);
    }
    if ((((((uint)(uVar5 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar5 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar5 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      FUN_0090d910(auStack_98,*(undefined8 *)PTR_DAT_04bb4868,*(undefined1 *)(param_1 + 0xc1b0));
      if (param_2 == 1) {
        puVar3 = auStack_50;
        plVar2 = (long *)**(undefined8 **)
                           (*(long *)(lVar4 + 0x38) +
                           (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
      }
      else {
        if (param_2 != 0) {
          return;
        }
        puVar3 = auStack_60;
        plVar2 = (long *)**(undefined8 **)
                           (*(long *)(lVar4 + 0x38) +
                           (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
      }
      (**(code **)(*plVar2 + 0x158))
                (plVar2,(int)(short)(uVar5 >> 0x10),(int)(short)(uVar5 >> 0x20),puVar3);
    }
  }
  return;
}

