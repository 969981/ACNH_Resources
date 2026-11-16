
void FUN_02776d24(byte *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar6 == 0) {
    return;
  }
  lVar10 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar6 = *(long *)(lVar10 + 0x2d128);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar10 + 0x2d128) == 0) goto LAB_02776e00;
      plVar8 = *(long **)(*(long *)(lVar10 + 0x2d128) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_48 = *(long *)(lVar10 + 0x2d108);
      local_40 = *(undefined8 *)(lVar10 + 0x2d110);
      uStack_38 = 0x790;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_02776e00:
  if (0 < param_2) {
    puVar1 = (uint *)(*(long *)(lVar10 + 0x2d110) + *(long *)(lVar10 + 0x2d108));
    uVar2 = *puVar1;
    if (*(byte *)((long)puVar1 + 7) == 0 &&
        (((ulong)uVar2 == 0 && (ushort)puVar1[1] == 0) && *(byte *)((long)puVar1 + 6) == 0)) {
      uVar5 = 0;
    }
    else {
      lVar6 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
      uVar5 = 0;
      if ((uint)*(byte *)((long)puVar1 + 7) ==
          ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff)) {
        uVar5 = ((int)lVar6 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar6 >> 0x20) + 0x80e32b11;
      }
    }
    if (0xf423e < uVar5) {
      uVar5 = 999999;
    }
    uVar2 = uVar5 + param_2;
    if (0xf423e < (int)(uVar5 + param_2)) {
      uVar2 = 999999;
    }
    uVar5 = nn::os::GetSystemTick();
    uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = uVar3 ^ uVar3 * 0x800;
    uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(short *)(puVar1 + 1) = (short)(uVar5 >> 0x10);
    uVar11 = (ulong)(uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5) * 0x1b;
    *(char *)((long)puVar1 + 6) = (char)(uVar11 >> 0x20);
    lVar6 = (ulong)(uVar2 + 0x7f1cd4ef + (uVar5 >> 0x10)) << (uVar11 >> 0x20) + 3;
    uVar2 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
    *puVar1 = uVar2;
    *(char *)((long)puVar1 + 7) =
         (char)uVar2 + (char)(uVar2 >> 0x10) + (char)(uVar2 >> 0x18) + (char)(uVar2 >> 8) + -0x2d;
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x2d128) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x2d128) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

