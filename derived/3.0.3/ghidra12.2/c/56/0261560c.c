
ulong FUN_0261560c(byte *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte local_a8c [4];
  undefined3 local_a88;
  char cStack_a85;
  ushort local_a84;
  undefined1 auStack_a80 [2604];
  undefined4 local_54;
  
  if (*param_1 < 8) {
    FUN_026194b4(auStack_a80,param_1);
    puVar1 = PTR_DAT_04bb4f78;
    if ((param_4 == '\x01') && (*param_1 < 8)) {
      _local_a88 = CONCAT31(stack0xfffffffffffff579,*param_1);
      lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_a88,1);
      if (lVar2 == 0) goto LAB_02615710;
      lVar7 = lVar2 + 0x194b0;
      if (*(long *)(lVar2 + 0x194b8) == 0) {
        lVar7 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar7 + 0x2d160) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x2d160), puVar3 == (undefined8 *)0x0)) {
        bVar11 = *(byte *)(*(long *)(lVar7 + 0x2d148) + *(long *)(lVar7 + 0x2d140) + 0x1a);
      }
      else {
        uVar4 = (**(code **)*puVar3)();
        bVar11 = *(byte *)(*(long *)(lVar7 + 0x2d148) + *(long *)(lVar7 + 0x2d140) + 0x1a);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2d160) != 0)) &&
           (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x2d160) + 8), puVar3 != (undefined8 *)0x0))
        {
          (**(code **)*puVar3)();
        }
      }
      if ((bVar11 < 0x15) && (local_54 = 1, 10 < bVar11)) {
        local_54 = 2;
      }
    }
    else {
LAB_02615710:
      local_54 = 1;
    }
    uVar5 = FUN_02615800(auStack_a80,param_2,param_3);
    local_a8c[0] = *param_1;
    _local_a88 = CONCAT13(param_4,(int3)uVar5);
    local_a84 = (ushort)(byte)((ulong)uVar5 >> 0x20);
    if (7 < local_a8c[0]) {
      local_a8c[0] = 0xff;
    }
    lVar2 = FUN_02583354(*(undefined8 *)puVar1,local_a8c,1);
    if (lVar2 != 0) {
      uVar4 = FUN_02617510(&local_a88,lVar2,param_2,param_3);
      uVar9 = uVar4 >> 0x18 & 0xffffff;
      uVar6 = (uint)(uVar4 >> 0x20) & 0xffff;
      uVar8 = uVar4 >> 0x28 & 0xff;
      uVar10 = uVar4 >> 0x10;
      goto LAB_026157a4;
    }
  }
  uVar10 = 1;
  uVar8 = 0;
  uVar6 = 0;
  uVar4 = 0x4c7b;
  uVar9 = 1;
LAB_026157a4:
  return (ulong)(uVar6 & 0xff) << 0x20 | uVar8 << 0x28 | (uVar9 & 0xff) << 0x18 |
         (uVar10 & 0xff) << 0x10 | uVar4 & 0xffff;
}

