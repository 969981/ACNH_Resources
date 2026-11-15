
void FUN_02499384(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined *__dest;
  byte local_6c [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_54 [4];
  int local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  
  local_50 = 0;
  if (*(char *)(param_1 + 0x1922) != '\0' || *(char *)(param_1 + 0x1920) < '\x01') {
    local_50 = -0x80000000;
  }
  local_50 = local_50 + (uint)*(ushort *)(param_1 + 0x1914) * 0x10000;
  fStack_48 = (float)(int)*(short *)(param_1 + 0x191a) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1916) * 0.001;
  local_44 = (float)*(int *)(param_1 + 0x191c) * 0.001;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_4c);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_50);
  if (*(char *)(param_1 + 0x1922) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    lVar6 = FUN_0170b82c(puVar5,uVar1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    lVar7 = FUN_017067d4(puVar5,uVar1,0);
    if (lVar7 != 0) {
      FUN_01752fd8(lVar7,PTR_DAT_04bbe268,0,0,0);
    }
    if (lVar6 != 0) {
      __dest = *(undefined **)(lVar6 + 0x2f0);
      if (__dest != PTR_DAT_04bb2f90 + 0x31) {
        iVar4 = 6;
        if (*(int *)(lVar6 + 0x2f8) < 7) {
          iVar4 = *(int *)(lVar6 + 0x2f8) + -1;
        }
        memcpy(__dest,PTR_DAT_04bb2f90 + 0x31,(long)iVar4);
        __dest[iVar4] = 0;
      }
      *(undefined4 *)(lVar6 + 0x340) = 0xffffffff;
      *(undefined2 *)(lVar6 + 0x42c) = 0x100;
      *(undefined4 *)(lVar6 + 0x428) = 3;
      *(undefined8 *)(lVar6 + 0x420) = 0;
      *(undefined8 *)(lVar6 + 0x40c) = *(undefined8 *)(lVar6 + 0x3dc);
      *(undefined8 *)(lVar6 + 0x404) = *(undefined8 *)(lVar6 + 0x3d4);
      *(undefined8 *)(lVar6 + 0x3ec) = *(undefined8 *)(lVar6 + 0x3bc);
      *(undefined8 *)(lVar6 + 0x3e4) = *(undefined8 *)(lVar6 + 0x3b4);
      *(undefined8 *)(lVar6 + 0x3fc) = *(undefined8 *)(lVar6 + 0x3cc);
      *(undefined8 *)(lVar6 + 0x3f4) = *(undefined8 *)(lVar6 + 0x3c4);
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  }
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar8 = (uint)bVar2;
  bVar3 = 7 < uVar8;
  if (bVar3) {
    uVar8 = 0xff;
  }
  local_54[0] = (undefined1)uVar8;
  lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar8 * 0x740;
  if (bVar3) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar6 + 0x424) = 3;
    FUN_01393458(lVar6 + 0x4c8);
  }
  else {
    *(undefined4 *)(lVar6 + 0x424) = 4;
  }
  if (bVar2 < 8) {
    FUN_02582d8c(local_54,1);
  }
  local_6c[0] = *(byte *)(param_1 + 0x1ee8);
  local_5c = 0x3dcccccd;
  local_58 = 0;
  local_60 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_6c,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

