
/* WARNING: Removing unreachable block (ram,0x0037ebc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037ea30(long *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  bVar6 = *(byte *)((long)param_1 + 0x5b);
  fVar15 = *(float *)(param_1 + 10);
  if ((bVar6 & 3) == 2) {
    fVar16 = -fVar15;
    fVar18 = *(float *)((long)param_1 + 0x54);
  }
  else {
    fVar16 = 0.0;
    if ((bVar6 & 3) == 0) {
      fVar16 = fVar15 * -0.5;
    }
    fVar18 = *(float *)((long)param_1 + 0x54);
  }
  bVar6 = bVar6 >> 2 & 3;
  if (bVar6 == 2) {
    fVar17 = fVar18;
  }
  else {
    fVar17 = 0.0;
    if (bVar6 == 0) {
      fVar17 = fVar18 * 0.5;
    }
  }
  FUN_0038cdc0(&local_90,param_2);
  bVar6 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar5 = _UNK_04102628;
  uVar4 = _DAT_04102620;
  uVar3 = DAT_04102218;
  uVar2 = DAT_04102210;
  if (bVar6 != 0) {
    uVar12 = 0;
    fVar13 = 1.0 / ((fVar15 + fVar16) - fVar16);
    fVar14 = 1.0 / ((fVar17 - fVar18) - fVar17);
    do {
      uVar7 = (**(code **)(*param_1 + 0x58))(param_1,uVar12);
      puVar8 = (ulong *)FUN_003788bc(uVar7,param_2);
      puVar8[1] = (ulong)(uint)-((fVar16 + fVar15 + fVar16) * fVar13) << 0x20;
      *puVar8 = (ulong)(uint)(fVar13 + fVar13);
      puVar8[3] = (ulong)(uint)-((fVar17 + (fVar17 - fVar18)) * fVar14) << 0x20;
      puVar8[2] = (ulong)(uint)(fVar14 + fVar14) << 0x20;
      puVar8[5] = uVar5;
      puVar8[4] = uVar4;
      puVar8[7] = uVar3;
      puVar8[6] = uVar2;
      puVar8[9] = uStack_88;
      puVar8[8] = local_90;
      puVar8[0xb] = uStack_78;
      puVar8[10] = uStack_80;
      puVar8[0xd] = uStack_68;
      puVar8[0xc] = local_70;
      if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) == 0) {
        bVar10 = 0;
LAB_0037ec40:
        if (bVar10 != 0) goto LAB_0037eb60;
      }
      else {
        lVar11 = param_1[0x15] + 0xc;
        uVar1 = *(uint *)(param_1[0x15] + 0x10);
        lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + (ulong)uVar1 + 4 +
                                                              (ulong)*(byte *)(lVar11 + (ulong)(*(
                                                  int *)(lVar11 + (ulong)uVar1 + 4) + uVar1) + 0xc)
                                                  * 4) + uVar1) + 8);
        bVar9 = 0;
        if (*(long *)(lVar11 + 0x58) != 0) {
          bVar9 = *(char *)(lVar11 + 0x98) == '\0' & *(byte *)(*(long *)(lVar11 + 0x58) + 8) >> 5;
        }
        if (*(long *)(lVar11 + 8) == 0) {
          bVar10 = 0;
        }
        else {
          bVar10 = *(char *)(lVar11 + 0x54) == '\0' & *(byte *)(*(long *)(lVar11 + 8) + 4) >> 1;
        }
        if (bVar9 == 0) goto LAB_0037ec40;
LAB_0037eb60:
        *(undefined4 *)((long)puVar8 + 0xdc) = 0x3b808081;
      }
      uVar12 = uVar12 + 1;
    } while (bVar6 != uVar12);
  }
  return;
}

