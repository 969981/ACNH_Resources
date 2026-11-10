
uint FUN_00310420(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 local_44;
  
  local_44 = param_3;
  puVar5 = (undefined4 *)FUN_00187df4(4);
  *puVar5 = *param_4;
  puVar6 = (undefined4 *)FUN_00187df4(8);
  puVar6[1] = param_4[1];
  *puVar6 = *puVar5;
  local_58 = puVar6 + 2;
  FUN_00187e4c(puVar5);
  puVar7 = (undefined4 *)FUN_00187df4(0x10);
  puVar7[2] = param_4[2];
  puVar7[1] = puVar6[1];
  *puVar7 = *puVar6;
  local_58 = puVar7 + 3;
  FUN_00187e4c(puVar6);
  puVar7[3] = param_4[3];
  local_58 = puVar7 + 4;
  puVar8 = (undefined4 *)FUN_00187df4(0x20);
  puVar5 = puVar8 + 8;
  puVar6 = puVar8 + 5;
  puVar8[4] = param_4[4];
  puVar8[3] = puVar7[3];
  puVar8[2] = puVar7[2];
  puVar8[1] = puVar7[1];
  *puVar8 = *puVar7;
  local_58 = puVar6;
  FUN_00187e4c(puVar7);
  if (puVar6 == puVar5) {
    uVar10 = (long)puVar6 - (long)puVar8;
    uVar1 = ((long)uVar10 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      local_60 = puVar8;
      local_50 = puVar6;
                    /* WARNING: Subroutine does not return */
      FUN_001a3240(&local_60);
    }
    uVar2 = (long)uVar10 >> 1;
    if ((ulong)((long)uVar10 >> 1) <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_00187df4(uVar2 << 2);
    }
    puVar7 = (undefined4 *)(lVar9 + ((long)uVar10 >> 2) * 4);
    puVar5 = (undefined4 *)(lVar9 + uVar2 * 4);
    local_58 = puVar7 + 1;
    *puVar7 = param_4[5];
    if (puVar6 != puVar8) {
      lVar9 = 0;
      do {
        bVar3 = lVar9 != -0x10;
        *(undefined4 *)((long)puVar7 + lVar9 + -4) = *(undefined4 *)((long)puVar8 + lVar9 + 0x10);
        lVar9 = lVar9 + -4;
      } while (bVar3);
      puVar7 = puVar7 + -5;
    }
    FUN_00187e4c(puVar8);
  }
  else {
    local_58 = puVar8 + 6;
    *puVar6 = param_4[5];
    puVar7 = puVar8;
  }
  local_60 = puVar7;
  local_50 = puVar5;
  uVar4 = FUN_00310620(param_1 + 0x140,param_2,&local_44,&local_60);
  local_58 = puVar7;
  FUN_00187e4c(puVar7);
  return uVar4 & 1;
}

