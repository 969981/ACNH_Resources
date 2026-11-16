
/* WARNING: Removing unreachable block (ram,0x02926170) */
/* WARNING: Removing unreachable block (ram,0x02926158) */
/* WARNING: Removing unreachable block (ram,0x02926168) */

byte FUN_02925f80(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined *local_80;
  char *pcStack_78;
  uint local_70;
  uint uStack_6c;
  undefined *local_68;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  long lStack_50;
  undefined4 local_44;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar11 = (char *)param_2[1];
  if (pcVar11 == "sza") {
LAB_02926014:
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "SzaTaled1stTimeAnyPlayer";
    iVar10 = FUN_0273ea30(&local_80);
    bVar9 = iVar10 == 1;
  }
  else {
    uVar12 = 0;
    bVar8 = true;
    do {
      if (pcVar11[uVar12] != (&DAT_04076b75)[uVar12]) break;
      if (pcVar11[uVar12] == '\0') {
        if (bVar8) goto LAB_02926014;
        break;
      }
      bVar8 = uVar12 < 0x80000;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x80001);
    if (((*pcVar11 == 'k') && (pcVar11[1] == 'p')) && (pcVar11[2] == 's')) {
      puVar13 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_80 = puVar13;
      bVar9 = FUN_00a8117c(&local_80);
      bVar9 = ((uint)((ulong)puVar13 >> 0x20) & 0xff) - 7 < 0xe & (bVar9 ^ 0xff);
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar14 = param_2[1];
      (**(code **)(DAT_055c9d50 + 0x18))(&DAT_055c9d50);
      puVar13 = PTR_DAT_04bb27c8;
      if (lVar14 == DAT_055c9d58) {
LAB_02926120:
        local_58 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
        fVar15 = *(float *)(param_1 + 0x428) + *(float *)(param_2 + 2);
        fVar16 = *(float *)(param_1 + 0x430) + *(float *)(param_2 + 3);
        local_80 = PTR_DAT_04bbc1a0 + 0x10;
        pcStack_78 = PTR_DAT_04bb2010 + 0x10;
        lStack_50 = *(long *)PTR_DAT_04bb27c8 + 0x28;
        fVar15 = (float)(int)((int)((float)(int)fVar15 / 10.0) - (uint)(fVar15 < 0.0)) * 10.0;
        fVar17 = (float)(int)((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0)) * 10.0;
        fVar16 = fVar15 + 2.5;
        fVar18 = fVar17 + 2.5;
        fVar15 = fVar15 + 10.0 + -2.5;
        fVar17 = fVar17 + 10.0 + -2.5;
        iVar2 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
        iStack_5c = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
        iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        iVar10 = iVar2;
        if (iVar3 <= iVar2) {
          iVar10 = iVar3;
        }
        if (iVar2 <= iVar3) {
          iVar2 = iVar3;
        }
        iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
        iVar3 = iStack_5c;
        if (iVar4 <= iStack_5c) {
          iVar3 = iVar4;
        }
        if (iStack_5c <= iVar4) {
          iStack_5c = iVar4;
        }
        local_70 = iVar10 + (int)param_2[4];
        local_60 = iVar2 + (int)param_2[4];
        uStack_6c = iVar3 + *(int *)((long)param_2 + 0x24);
        iStack_5c = iStack_5c + *(int *)((long)param_2 + 0x24);
        local_68 = pcStack_78;
        uVar12 = FUN_009721a0(*(undefined8 *)(*(long *)PTR_DAT_04bb27c8 + 0x90),&local_80,1);
        iVar10 = iStack_5c;
        uVar7 = local_60;
        uVar6 = uStack_6c;
        uVar5 = local_70;
        if ((uVar12 & 1) == 0) {
          if (*(long *)puVar13 == 0) {
            bVar8 = true;
          }
          else {
            lVar14 = *(long *)(*(long *)puVar13 + 0x90);
            if (((((lVar14 == 0) || ((int)local_70 < 0)) ||
                 (((int)uStack_6c < 0 ||
                  ((*(uint *)(lVar14 + 0x38) <= local_70 || (*(uint *)(lVar14 + 0x3c) <= uStack_6c))
                  )))) || (uVar1 = local_70 + *(uint *)(lVar14 + 0x38) * uStack_6c,
                          *(uint *)(lVar14 + 0x68) <= uVar1)) ||
               ((*(long *)(lVar14 + 0x70) == 0 ||
                (local_44 = 3,
                (*(uint *)(*(long *)(lVar14 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) == 0)))) {
              bVar8 = true;
              if (((lVar14 != 0) &&
                  ((((-1 < (int)local_60 && (-1 < (int)uStack_6c)) &&
                    (local_60 < *(uint *)(lVar14 + 0x38))) &&
                   ((uStack_6c < *(uint *)(lVar14 + 0x3c) &&
                    (uVar1 = local_60 + *(uint *)(lVar14 + 0x38) * uStack_6c,
                    uVar1 < *(uint *)(lVar14 + 0x68))))))) && (*(long *)(lVar14 + 0x70) != 0)) {
                local_44 = 3;
                bVar8 = (*(uint *)(*(long *)(lVar14 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) == 0;
              }
            }
            else {
              bVar8 = false;
            }
          }
          uVar12 = FUN_035ab380(local_70,uStack_6c,*(undefined4 *)((long)param_2 + 0x1c),&local_58,
                                bVar8);
          if ((((uVar12 & 1) != 0) &&
              (uVar12 = FUN_035ab380(uVar5,iVar10,*(undefined4 *)((long)param_2 + 0x1c),&local_58,
                                     bVar8), (uVar12 & 1) != 0)) &&
             (uVar12 = FUN_035ab380(uVar7,iVar10,*(undefined4 *)((long)param_2 + 0x1c),&local_58,
                                    bVar8), (uVar12 & 1) != 0)) {
            bVar9 = FUN_035ab380(uVar7,uVar6,*(undefined4 *)((long)param_2 + 0x1c),&local_58,bVar8);
            goto LAB_02926434;
          }
        }
        bVar9 = 0;
      }
      else {
        uVar12 = 0;
        bVar8 = true;
        do {
          if (*(char *)(param_2[1] + uVar12) != *(char *)(DAT_055c9d58 + uVar12)) break;
          if (*(char *)(param_2[1] + uVar12) == '\0') {
            if (bVar8) goto LAB_02926120;
            break;
          }
          bVar8 = uVar12 < 0x80000;
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x80001);
        bVar9 = 1;
      }
    }
  }
LAB_02926434:
  return bVar9 & 1;
}

