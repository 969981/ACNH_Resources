
undefined8 FUN_018d8130(long param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  undefined8 *local_70;
  undefined4 *puStack_68;
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_24;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar5 = FUN_0252d9bc(0);
  if ((lVar5 != 0) && (lVar6 = FUN_0252dec4(0), lVar6 != 0)) {
    local_48 = 0;
    local_50 = 0;
    local_24 = 0;
    uVar3 = FUN_01a1159c(*(undefined8 *)PTR_DAT_04bb4008,*param_3);
    pcVar9 = FUN_018d8340;
    if ((uVar3 != 0) && (uVar3 != 10)) {
      if ((uVar3 < 0x1a) && ((1 << (ulong)(uVar3 & 0x1f) & 0x21eb4a5U) != 0)) {
        pcVar9 = FUN_018d9090;
      }
      else {
        pcVar9 = FUN_018d8a60;
      }
    }
    *(long *)(param_1 + 0x28) = param_1;
    *(code **)(param_1 + 0x30) = pcVar9;
    puStack_68 = &local_24;
    *(undefined8 *)(param_1 + 0x38) = 0;
    local_54 = *param_3;
    local_58 = *(undefined4 *)(lVar6 + 4);
    local_70 = &local_50;
    local_60 = lVar5;
    uVar7 = (*pcVar9)(param_1,&local_70,&local_60);
    if ((uVar7 & 1) != 0) {
      if (uVar3 < 0x20) {
        puVar8 = (undefined8 *)(&PTR_DAT_049d1080)[uVar3];
      }
      else {
        puVar8 = &DAT_0407ebb1;
      }
      uVar4 = FUN_006bd550(puVar8,0);
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 != 0) {
        lVar5 = *(long *)(param_1 + 0x18);
        if ((int)uVar3 < 2) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          iVar11 = uVar3 - 1;
          do {
            uVar1 = iVar11 + uVar10;
            if ((int)uVar1 < 0 != SCARRY4(iVar11,uVar10)) {
              uVar1 = uVar1 + 1;
            }
            uVar2 = (int)uVar1 >> 1;
            uVar1 = *(uint *)(lVar5 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
            if (uVar1 == uVar4) goto joined_r0x018d8308;
            if (uVar1 < uVar4) {
              uVar10 = uVar2 + 1;
            }
            else {
              iVar11 = uVar2 - 1;
            }
          } while ((int)uVar10 < iVar11);
        }
        uVar2 = uVar10;
        if (*(uint *)(lVar5 + (long)(int)uVar10 * 0x20 + 0x18) == uVar4) {
joined_r0x018d8308:
          if (-1 < (int)uVar2) {
            if (uVar3 <= uVar2) {
              uVar2 = 0;
            }
            (**(code **)(lVar5 + (ulong)uVar2 * 0x20))(&local_50,*param_3);
            *(undefined8 *)(param_2 + 8) = local_50;
            *(undefined4 *)(param_2 + 0x10) = local_48;
            *(undefined4 *)(param_2 + 0x18) = local_24;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

