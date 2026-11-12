
void FUN_006f8890(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined8 *puVar11;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar8 = FUN_006bd550(param_2[1],0);
  iVar3 = *(int *)(param_1 + 0x288);
  if ((iVar3 != 0) && (uVar8 != 0)) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x284) + iVar9;
      iVar2 = 0;
      if (*(int *)(param_1 + 0x280) <= iVar1) {
        iVar2 = *(int *)(param_1 + 0x280);
      }
      puVar10 = (uint *)(*(long *)(param_1 + 0x278) + (long)(iVar1 - iVar2) * 0x60);
      uVar4 = puVar10[5];
      if (uVar4 != 0) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar8 / uVar4;
        }
        uVar6 = uVar8 - uVar6 * uVar4;
        uVar7 = uVar6;
        do {
          uVar5 = *(uint *)(*(long *)(puVar10 + 2) +
                           (-(ulong)(uVar7 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar7 << 6));
          if (uVar5 == uVar8) {
            uVar4 = *puVar10;
            if (uVar4 == 0) {
              puVar10[0x16] = uVar8;
            }
            else {
              puVar11 = &DAT_04c898f0 + (ulong)uVar4 * 3;
              if (9 < uVar4) {
                puVar11 = &DAT_04c898f0;
              }
              if (*(uint *)(puVar11 + 1) != uVar8) {
                *(uint *)(puVar11 + 1) = uVar8;
                *(undefined1 *)((long)puVar11 + 0xc) = 1;
              }
            }
            break;
          }
          if (uVar5 == 0) break;
          uVar5 = 0;
          if ((int)(uVar7 + 1) < (int)uVar4) {
            uVar5 = uVar7 + 1;
          }
          uVar7 = uVar5;
        } while (uVar5 != uVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  return;
}

