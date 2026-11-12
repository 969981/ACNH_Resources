
void FUN_008c4360(long param_1,long *param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint local_b0 [4];
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_70;
  float local_68;
  
  local_70 = *(undefined8 *)(param_1 + 0x2a8);
  local_68 = *(float *)(param_1 + 0x2b0);
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_006bd550(param_2[1],0);
  iVar2 = *(int *)(param_1 + 0x305b0);
  if (iVar2 != 0) {
    uVar11 = 0;
    iVar10 = iVar2 + -1;
    if (iVar10 == 0 || iVar2 < 1) {
      lVar8 = *(long *)(param_1 + 0x305b8);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x305b8);
      do {
        iVar2 = iVar10 + uVar11;
        if (iVar2 < 0 != SCARRY4(iVar10,uVar11)) {
          iVar2 = iVar2 + 1;
        }
        uVar1 = iVar2 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar1 * 8) + 0x18);
        if (uVar3 == uVar5) goto joined_r0x008c4448;
        if (uVar3 < uVar5) {
          uVar11 = uVar1 + 1;
        }
        else {
          iVar10 = uVar1 - 1;
        }
      } while ((int)uVar11 < iVar10);
    }
    uVar1 = uVar11;
    if (*(uint *)(*(long *)(lVar8 + (long)(int)uVar11 * 8) + 0x18) == uVar5) {
joined_r0x008c4448:
      if ((-1 < (int)uVar1) && (lVar8 = **(long **)(lVar8 + (ulong)uVar1 * 8), lVar8 != 0)) {
LAB_008c4544:
        pfVar6 = (float *)(**(code **)(*(long *)(lVar8 + 0x1b8) + 0xf0))(lVar8 + 0x1b8);
        local_70 = CONCAT44(local_70._4_4_ - pfVar6[1],(float)local_70 - *pfVar6);
        local_68 = local_68 - pfVar6[2];
        goto LAB_008c4578;
      }
    }
  }
  uVar5 = 0;
  do {
    pcVar12 = "";
    if (uVar5 < 99) {
      pcVar12 = (&PTR_s_cNormal_04922de8)[uVar5];
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar12 == pcVar9) {
LAB_008c4520:
      local_b0[0] = uVar5;
      if (uVar5 < *(uint *)(param_1 + 0x548)) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x550) + (long)(int)uVar5 * 8);
      }
      else {
        lVar8 = 0;
      }
      goto LAB_008c4544;
    }
    if (*pcVar12 == *pcVar9) {
      if (*pcVar12 == '\0') goto LAB_008c4520;
      lVar8 = 0x7fffe;
      while( true ) {
        if (pcVar12[1] != pcVar9[1]) break;
        if (pcVar12[1] == '\0') goto LAB_008c4520;
        if (pcVar12[2] != pcVar9[2]) break;
        if (pcVar12[2] == '\0') goto LAB_008c4520;
        if ((lVar8 == 0) || (cVar4 = pcVar12[3], cVar4 != pcVar9[3])) break;
        lVar8 = lVar8 + -3;
        pcVar9 = pcVar9 + 3;
        pcVar12 = pcVar12 + 3;
        if (cVar4 == '\0') goto LAB_008c4520;
      }
    }
    uVar11 = 99;
    if ((int)uVar5 < 99) {
      uVar11 = uVar5 + 1;
    }
    uVar5 = uVar11;
  } while (uVar11 != 99);
LAB_008c4578:
  uVar7 = (**(code **)(*(long *)(param_1 + 0x37f58) + 0x10))((long *)(param_1 + 0x37f58));
  if ((uVar7 & 1) != 0) {
    local_b0[0] = *(uint *)(param_1 + 0x30800);
    FUN_008c0a74(local_b0,*(undefined8 *)(*(long *)(param_1 + 0x26458) + (long)(int)local_b0[0] * 8)
                );
    local_70 = CONCAT44(local_70._4_4_ - fStack_9c,(float)local_70 - local_a0);
    local_68 = local_68 - local_98;
  }
  FUN_008c4100(param_1,param_2,param_3,&local_70,param_4 & 1,param_5 & 1,param_6 & 1);
  return;
}

