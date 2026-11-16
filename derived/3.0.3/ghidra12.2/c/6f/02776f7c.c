
void FUN_02776f7c(byte *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
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
  lVar5 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar5 == 0) {
    return;
  }
  lVar10 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar5 = *(long *)(lVar10 + 0x2d128);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0x2d128) == 0) goto LAB_02777058;
      plVar7 = *(long **)(*(long *)(lVar10 + 0x2d128) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_48 = *(long *)(lVar10 + 0x2d108);
      local_40 = *(undefined8 *)(lVar10 + 0x2d110);
      uStack_38 = 0x790;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
  }
LAB_02777058:
  if (0 < param_2) {
    puVar1 = (uint *)(*(long *)(lVar10 + 0x2d110) + *(long *)(lVar10 + 0x2d108));
    uVar4 = *puVar1;
    if (*(byte *)((long)puVar1 + 7) == 0 &&
        (((ulong)uVar4 == 0 && (ushort)puVar1[1] == 0) && *(byte *)((long)puVar1 + 6) == 0)) {
      uVar9 = 0;
    }
    else {
      lVar5 = (ulong)uVar4 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
      uVar9 = 0;
      if ((uint)*(byte *)((long)puVar1 + 7) ==
          ((uVar4 + (uVar4 >> 0x10) + (uVar4 >> 0x18) + (uVar4 >> 8)) - 0x2d & 0xff)) {
        uVar9 = ((int)lVar5 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar5 >> 0x20) + 0x80e32b11;
      }
    }
    if (0xf423e < uVar9) {
      uVar9 = 999999;
    }
    uVar4 = nn::os::GetSystemTick();
    uVar2 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    uVar4 = uVar2 ^ uVar2 * 0x800;
    uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = uVar3 ^ uVar3 * 0x800;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
    *(short *)(puVar1 + 1) = (short)(uVar4 >> 0x10);
    uVar11 = (ulong)(uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar2 ^ uVar4) * 0x1b;
    *(char *)((long)puVar1 + 6) = (char)(uVar11 >> 0x20);
    lVar5 = (ulong)((uVar9 - param_2 & ((int)(uVar9 - param_2) >> 0x1f ^ 0xffffffffU)) + 0x7f1cd4ef
                   + (uVar4 >> 0x10)) << (uVar11 >> 0x20) + 3;
    uVar4 = (int)((ulong)lVar5 >> 0x20) + (int)lVar5;
    *puVar1 = uVar4;
    *(char *)((long)puVar1 + 7) =
         (char)uVar4 + (char)(uVar4 >> 0x10) + (char)(uVar4 >> 0x18) + (char)(uVar4 >> 8) + -0x2d;
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x2d128) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x2d128) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

