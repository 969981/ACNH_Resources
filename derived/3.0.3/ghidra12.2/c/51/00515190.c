
bool FUN_00515190(long param_1,int param_2,int param_3,long *param_4,long *param_5,uint param_6)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *local_78;
  undefined8 local_70;
  uint local_64;
  
  lVar4 = param_4[1];
  lVar14 = *(long *)(*(long *)(param_1 + 0x60) + (long)param_2 * 8);
  local_78 = (int *)0x0;
  local_70 = 0x8000000000000000;
  if ((param_6 & 1) != 0) {
    FUN_00515440(param_3,&local_78);
  }
  puVar5 = PTR_DAT_048607b8;
  if (*(int *)(lVar14 + 0x28) < 1) {
    iVar10 = (int)param_4[1];
    uVar7 = local_70._4_4_;
  }
  else {
    lVar15 = 0;
    do {
      uVar3 = local_70;
      piVar11 = local_78;
      lVar16 = *(long *)(*(long *)(param_1 + 0x50) +
                        (long)*(int *)(*(long *)(lVar14 + 0x20) + lVar15 * 4) * 8);
      if ((param_6 & 1) == 0) {
        if (*(int *)(lVar16 + 0x24) == param_3) {
LAB_0051534c:
          uVar7 = *(uint *)(param_4 + 1);
          if (uVar7 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar5,param_4,8);
            uVar7 = *(uint *)(param_4 + 1);
          }
          *(long *)(*param_4 + (long)(int)uVar7 * 8) = lVar16;
          *(uint *)(param_4 + 1) = uVar7 + 1;
          uVar7 = *(uint *)(param_5 + 1);
          if (uVar7 == (*(uint *)((long)param_5 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar5,param_5,4);
            uVar7 = *(uint *)(param_5 + 1);
          }
          *(int *)(*param_5 + (long)(int)uVar7 * 4) = (int)lVar15;
          *(uint *)(param_5 + 1) = uVar7 + 1;
        }
      }
      else {
        uVar7 = (uint)local_70;
        uVar13 = (ulong)(int)(uint)local_70;
        local_64 = (uint)local_70;
        if (0 < (int)(uint)local_70) {
          piVar6 = (int *)FUN_00421ed0(puVar5,4,&local_64);
          piVar8 = piVar6;
          if (6 < uVar7 - 1) {
            iVar10 = (uVar7 & 7) - uVar7;
            piVar12 = piVar6;
            do {
              *piVar12 = *piVar11;
              piVar12[1] = piVar11[1];
              piVar12[2] = piVar11[2];
              piVar12[3] = piVar11[3];
              piVar12[4] = piVar11[4];
              piVar12[5] = piVar11[5];
              piVar12[6] = piVar11[6];
              piVar1 = piVar11 + 7;
              piVar8 = piVar12 + 8;
              piVar11 = piVar11 + 8;
              piVar12[7] = *piVar1;
              iVar10 = iVar10 + 8;
              piVar12 = piVar8;
              uVar3 = uVar13;
            } while (iVar10 != 0);
          }
          if ((uVar3 & 7) != 0) {
            iVar10 = -(uVar7 & 7);
            do {
              iVar10 = iVar10 + 1;
              *piVar8 = *piVar11;
              piVar8 = piVar8 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar10 != 0);
          }
          if (uVar7 != 0) {
            lVar9 = uVar13 << 2;
            piVar11 = piVar6;
            do {
              if (*(int *)(lVar16 + 0x24) == *piVar11) {
                bVar2 = true;
                goto joined_r0x005152d4;
              }
              lVar9 = lVar9 + -4;
              piVar11 = piVar11 + 1;
            } while (lVar9 != 0);
          }
          bVar2 = false;
joined_r0x005152d4:
          if ((piVar6 != (int *)0x0) && (-1 < (int)local_64)) {
            FUN_00421f90(puVar5,piVar6,4,local_64 & 0x3fffffff);
          }
          if (bVar2) goto LAB_0051534c;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar14 + 0x28));
    iVar10 = (int)param_4[1];
    uVar7 = local_70._4_4_;
  }
  if ((-1 < (long)local_70) && (local_70 = (ulong)uVar7 << 0x20, local_78 != (int *)0x0)) {
    FUN_00421f90(puVar5,local_78,4,uVar7 & 0x3fffffff);
  }
  return (int)lVar4 < iVar10;
}

