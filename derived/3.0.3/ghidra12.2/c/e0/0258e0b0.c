
void FUN_0258e0b0(long param_1,long param_2)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint local_a0 [14];
  int local_68 [6];
  
  local_68[4] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_a0[0] = CONCAT31(local_a0[0]._1_3_,*(byte *)(param_1 + 0x18));
    lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_a0,1);
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
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  uVar12 = 0;
  puVar1 = (ushort *)(param_2 + 8);
  do {
    uVar4 = *(uint *)(param_2 + 0xe0a68 + uVar12 * 4);
    puVar10 = puVar1 + (ulong)uVar4 * 0x3be8;
    if (0x1d < uVar4) {
      puVar10 = puVar1;
    }
    uVar8 = nn::time::IsValidDate
                      ((uint)*puVar10,(uint)(byte)puVar10[1],(uint)*(byte *)((long)puVar10 + 3));
    if ((uVar8 & 1) == 0) {
      if ((int)uVar12 < 1) {
        lVar11 = 0;
        lVar13 = 0;
        lVar14 = 0;
        lVar15 = 0;
        lVar16 = 0;
        goto LAB_0258e2fc;
      }
      break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x1e);
  uVar8 = 0;
  do {
    puVar10 = puVar1;
    if ((uVar8 < 0x1e) &&
       (uVar4 = *(uint *)(param_2 + 0xe0a68 + uVar8 * 4), puVar10 = puVar1 + (ulong)uVar4 * 0x3be8,
       0x1d < uVar4)) {
      puVar10 = puVar1;
    }
    iVar3 = *(int *)(puVar10 + 0x3bbe);
    if (*(int *)(puVar10 + 0x3bcc) == 0 || iVar3 == 0) {
      local_a0[0] = 4;
    }
    else {
      piVar2 = (int *)(*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
      if ((puVar10[0x3bc0] == 0) || ((short)piVar2[1] == 0)) {
        if (iVar3 == *piVar2) goto LAB_0258e29c;
      }
      else if ((iVar3 == *piVar2) &&
              ((*(long *)(piVar2 + 1) == *(long *)(puVar10 + 0x3bc0) &&
               *(long *)(piVar2 + 3) == *(long *)(puVar10 + 0x3bc4)) &&
               piVar2[5] == *(int *)(puVar10 + 0x3bc8))) {
LAB_0258e29c:
        if ((*(int *)(puVar10 + 0x3bcc) == piVar2[7]) &&
           ((*(long *)(piVar2 + 8) == *(long *)(puVar10 + 0x3bce) &&
            *(long *)(piVar2 + 10) == *(long *)(puVar10 + 0x3bd2)) &&
            piVar2[0xc] == *(int *)(puVar10 + 0x3bd6))) {
          local_a0[0] = 1;
        }
        else {
          local_a0[0] = 2;
        }
        goto LAB_0258e1c8;
      }
      local_a0[0] = 3;
    }
LAB_0258e1c8:
    uVar8 = uVar8 + 1;
    local_68[0] = local_68[0] + 1;
    uVar9 = (ulong)local_a0[0];
    if (4 < local_a0[0]) {
      uVar9 = 0;
    }
    local_68[uVar9] = local_68[uVar9] + 1;
    if (uVar12 == uVar8) {
      lVar16 = (long)local_68[0];
      lVar15 = (long)local_68[1];
      lVar11 = (long)local_68[4];
      lVar14 = (long)local_68[2];
      lVar13 = (long)local_68[3];
LAB_0258e2fc:
      FUN_006d8678(local_a0,"Count_%s",&DAT_04a853f0,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar16);
      }
      FUN_006d8678(local_a0,"Count_%s",&DAT_04a853f0,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar16);
      }
      FUN_006d8678(local_a0,"Count_%s",&DAT_04a853f5,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar15);
      }
      FUN_006d8678(local_a0,"Count_%s",&DAT_04a853f5,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar15);
      }
      FUN_006d8678(local_a0,"Count_%s",s_Villager_04a853fb,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar14);
      }
      FUN_006d8678(local_a0,"Count_%s",s_Villager_04a853fb,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar14);
      }
      FUN_006d8678(local_a0,"Count_%s",s_Visitor_04a85405,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar13);
      }
      FUN_006d8678(local_a0,"Count_%s",s_Visitor_04a85405,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar13);
      }
      FUN_006d8678(local_a0,"Count_%s",s_System_04a8540e,&DAT_04a85440);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar11);
      }
      FUN_006d8678(local_a0,"Count_%s",s_System_04a8540e,&DAT_04a85445);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),local_a0,lVar11);
      }
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return;
    }
  } while( true );
}

