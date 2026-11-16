
void FUN_0258db80(long param_1,long param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_e0;
  long local_d8;
  uint local_cc;
  uint local_c0 [14];
  int local_88 [10];
  
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_c0[0] = CONCAT31(local_c0[0]._1_3_,*(byte *)(param_1 + 0x18));
    lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_c0,1);
  }
  else if (*(int *)(param_1 + 0x1c) == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (DAT_05574040 != 0) {
      lVar5 = FUN_026eec4c();
    }
  }
  if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
    local_cc = 0;
  }
  else {
    local_cc = (**(code **)*puVar6)();
  }
  uVar13 = 0;
  puVar1 = (ushort *)(param_2 + 8);
  do {
    uVar4 = *(uint *)(param_2 + 0xe0a68 + uVar13 * 4);
    puVar8 = puVar1 + (ulong)uVar4 * 0x3be8;
    if (0x1d < uVar4) {
      puVar8 = puVar1;
    }
    uVar7 = nn::time::IsValidDate
                      ((uint)*puVar8,(uint)(byte)puVar8[1],(uint)*(byte *)((long)puVar8 + 3));
    if ((uVar7 & 1) == 0) {
      if ((int)uVar13 < 1) {
        local_e0 = 0;
        local_d8 = 0;
        lVar12 = 0;
        lVar14 = 0;
        lVar15 = 0;
        lVar16 = 0;
        lVar17 = 0;
        lVar18 = 0;
        lVar10 = 0;
        lVar11 = 0;
        goto LAB_0258de54;
      }
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x1e);
  uVar7 = 0;
  do {
    puVar8 = puVar1;
    if ((uVar7 < 0x1e) &&
       (uVar4 = *(uint *)(param_2 + 0xe0a68 + uVar7 * 4), puVar8 = puVar1 + (ulong)uVar4 * 0x3be8,
       0x1d < uVar4)) {
      puVar8 = puVar1;
    }
    iVar3 = *(int *)(puVar8 + 0x3bbe);
    if (*(int *)(puVar8 + 0x3bcc) == 0 || iVar3 == 0) {
      local_c0[0] = 4;
    }
    else {
      piVar2 = (int *)(*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
      if ((puVar8[0x3bc0] == 0) || ((short)piVar2[1] == 0)) {
        if (iVar3 == *piVar2) goto LAB_0258dd6c;
      }
      else if ((iVar3 == *piVar2) &&
              ((*(long *)(piVar2 + 1) == *(long *)(puVar8 + 0x3bc0) &&
               *(long *)(piVar2 + 3) == *(long *)(puVar8 + 0x3bc4)) &&
               piVar2[5] == *(int *)(puVar8 + 0x3bc8))) {
LAB_0258dd6c:
        if ((*(int *)(puVar8 + 0x3bcc) == piVar2[7]) &&
           ((*(long *)(piVar2 + 8) == *(long *)(puVar8 + 0x3bce) &&
            *(long *)(piVar2 + 10) == *(long *)(puVar8 + 0x3bd2)) &&
            piVar2[0xc] == *(int *)(puVar8 + 0x3bd6))) {
          local_c0[0] = 1;
        }
        else {
          local_c0[0] = 2;
        }
        goto LAB_0258dda0;
      }
      local_c0[0] = 3;
    }
LAB_0258dda0:
    local_88[0] = local_88[0] + 1;
    piVar2 = local_88 + (ulong)local_c0[0] * 2;
    if (4 < local_c0[0]) {
      piVar2 = local_88;
    }
    *piVar2 = *piVar2 + 1;
    uVar9 = FUN_026d3220(puVar8,param_3);
    if ((uVar9 & 1) != 0) {
      local_88[1] = local_88[1] + 1;
      piVar2 = (int *)(((ulong)local_88 | 4) + (ulong)local_c0[0] * 8);
      if (4 < local_c0[0]) {
        piVar2 = (int *)((ulong)local_88 | 4);
      }
      *piVar2 = *piVar2 + 1;
    }
    uVar7 = uVar7 + 1;
    if (uVar13 == uVar7) {
      lVar11 = (long)local_88[0];
      lVar10 = (long)local_88[1];
      local_e0 = (long)local_88[8];
      local_d8 = (long)local_88[9];
      lVar18 = (long)local_88[2];
      lVar17 = (long)local_88[3];
      lVar16 = (long)local_88[4];
      lVar15 = (long)local_88[5];
      lVar14 = (long)local_88[6];
      lVar12 = (long)local_88[7];
LAB_0258de54:
      FUN_006d8678(local_c0,"Count_%s_%s",&DAT_04a853f0,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar11);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",&DAT_04a853f0,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar10);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",&DAT_04a853f5,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar18);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",&DAT_04a853f5,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar17);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",s_Villager_04a853fb,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar16);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",s_Villager_04a853fb,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar15);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",s_Visitor_04a85405,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar14);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",s_Visitor_04a85405,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,lVar12);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",s_System_04a8540e,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,local_e0);
      }
      FUN_006d8678(local_c0,"Count_%s_%s",s_System_04a8540e,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_c0,local_d8);
      }
      if ((((local_cc & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return;
    }
  } while( true );
}

