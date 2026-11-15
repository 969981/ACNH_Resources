
void FUN_0240e1ec(long param_1)

{
  long lVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  undefined1 local_44;
  
  sVar2 = *(short *)(param_1 + 0x190e);
  iVar8 = *(int *)(param_1 + 0x190a);
  iVar11 = *(int *)(param_1 + 0x1910);
  if (*(char *)(param_1 + 0x3a5) == '\0') {
    bVar3 = true;
  }
  else {
    uVar4 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = uVar4;
    bVar3 = *(char *)(param_1 + 0x3a5) == '\0';
  }
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  local_58 = (undefined *)CONCAT44((float)iVar8 * 0.001,(undefined4)local_58);
  uStack_50 = (char *)CONCAT44((float)iVar11 * 0.001,(float)(int)sVar2 * 0.25);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar7);
  iVar8 = *(int *)(param_1 + 0x3a0);
  fVar10 = 0.0;
  if (((!bVar3) && (fVar10 = 1.0, iVar8 != 0)) && (*(int *)(param_1 + 0x398) < iVar8)) {
    fVar9 = (float)*(int *)(param_1 + 0x398) / (float)iVar8;
    fVar12 = 1.0;
    if (fVar9 <= 1.0) {
      fVar12 = fVar9;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar12;
    }
  }
  local_44 = 1;
  local_48 = fVar10 * 0.7 + 0.3;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_58,*(undefined4 *)(param_1 + 0x230),1);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_052461c0), iVar8 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  uVar6 = FUN_0170a6d0(puVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x1997) = 0;
      *(undefined8 *)(param_1 + 0x199f) = 0;
      *(undefined8 *)(param_1 + 0x19a7) = 0;
      *(undefined8 *)(param_1 + 0x19af) = 0;
      *(undefined8 *)(param_1 + 0x19b7) = 0;
      *(undefined8 *)(param_1 + 0x19bf) = 0;
      *(undefined8 *)(param_1 + 0x19c7) = 0;
      *(undefined8 *)(param_1 + 0x19cf) = 0;
      *(undefined4 *)(param_1 + 0x19d6) = 0;
      *(undefined8 *)(param_1 + 0x198f) = *(undefined8 *)(param_1 + 0x190f);
      *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x1f);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar1 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar1 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar1,0x1f);
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      if (puVar5 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          puVar5 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar5 = &DAT_05240280;
        }
      }
      local_58 = PTR_DAT_04bb2020 + 0x10;
      uStack_50 = "PlayerJumpValleyReadyWait";
      FUN_017029bc(puVar5,&local_58,6,0,0);
    }
  }
  return;
}

