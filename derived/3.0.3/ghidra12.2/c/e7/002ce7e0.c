
void FUN_002ce7e0(long param_1,long *param_2,int *param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  char cVar10;
  long lVar11;
  ulong uVar12;
  undefined2 uVar13;
  char cVar14;
  long local_f8;
  undefined4 local_f0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  
  iVar5 = FUN_002b43fc(param_2);
  if (iVar5 == 0) {
    local_f0 = 0;
    local_f8 = 1;
    (**(code **)(*param_2 + 0x20))(param_2,&local_f8);
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(long *)(param_1 + 600) == 0) {
    return;
  }
  lVar7 = FUN_002c5fd0(*(long *)(param_1 + 0x18) + 0x270,param_2);
  if (lVar7 == 0) {
    FUN_002b3fa8(&local_f8);
    local_78 = 0;
    uStack_70 = 0;
    FUN_002b415c(&local_f8,param_2);
    FUN_002282f0(&local_78);
    FUN_002282f0(&uStack_70);
    local_68 = 0;
    local_64 = 0;
    FUN_002c5edc(*(long *)(param_1 + 0x18) + 0x270,&local_f8);
    FUN_002b4104(&local_f8);
  }
  if ((((param_4 & 1) == 0) && (*param_3 != 0)) &&
     (lVar7 = FUN_002c5fd0(*(long *)(param_1 + 0x18) + 0x270,param_2), lVar7 != 0)) {
    local_f8 = 0;
    FUN_002282f0(&local_f8);
    lVar11 = local_f8 - *(long *)(lVar7 + 0x88);
    plVar8 = (long *)FUN_00228380();
    uVar6 = 0;
    if (*plVar8 != 0) {
      uVar6 = (undefined4)(lVar11 / *plVar8);
    }
    *(undefined4 *)(lVar7 + 0x90) = uVar6;
  }
  lVar7 = FUN_002c95d4(*(undefined8 *)(param_1 + 0x18),param_2);
  if (lVar7 == 0) {
    uVar3 = 0;
    uVar1 = 0;
    cVar14 = '\0';
    lVar7 = FUN_002c5fd0(*(long *)(param_1 + 0x18) + 0x270,param_2);
  }
  else {
    cVar14 = *(char *)(lVar7 + 0xa4);
    uVar3 = FUN_002cb200();
    uVar1 = *(undefined1 *)(lVar7 + 0xa0);
    lVar7 = FUN_002c5fd0(*(long *)(param_1 + 0x18) + 0x270,param_2);
  }
  if (lVar7 == 0) {
    uVar13 = 0xffff;
    uVar12 = 0xffffffff;
  }
  else {
    if (cVar14 == '\0') {
      uVar12 = 0;
    }
    else {
      local_f8 = 0;
      FUN_002282f0(&local_f8);
      lVar11 = local_f8 - *(long *)(lVar7 + 0x80);
      plVar8 = (long *)FUN_00228380();
      uVar12 = 0;
      if (*plVar8 != 0) {
        uVar12 = lVar11 / *plVar8;
      }
    }
    uVar13 = (undefined2)*(undefined4 *)(lVar7 + 0x90);
  }
  FUN_002c60e0(*(long *)(param_1 + 0x18) + 0x270,param_2);
  FUN_002c96e0(*(undefined8 *)(param_1 + 0x18));
  uVar9 = (**(code **)(**(long **)(param_1 + 600) + 0x58))();
  puVar2 = PTR_DAT_04bccf00;
  if ((uVar9 & 1) != 0) {
    if (*param_3 == 0) {
      cVar10 = '\x01';
      if (((byte)PTR_DAT_04bccf00[0x7e] + 1 & 0x100) == 0) {
        cVar10 = PTR_DAT_04bccf00[0x7e] + 1;
      }
      PTR_DAT_04bccf00[0x7e] = cVar10;
    }
    else {
      cVar10 = '\x01';
      if (((byte)PTR_DAT_04bccf00[0x7f] + 1 & 0x100) == 0) {
        cVar10 = PTR_DAT_04bccf00[0x7f] + 1;
      }
      PTR_DAT_04bccf00[0x7f] = cVar10;
      uVar6 = FUN_002b43f4(param_2);
      *(undefined4 *)(puVar2 + 0x6c) = uVar6;
      *(short *)(puVar2 + 0x70) = (short)uVar12;
      *(undefined2 *)(puVar2 + 0x72) = uVar13;
      *(int *)(puVar2 + 0x74) = *param_3;
      FUN_002b4460(param_2);
      bVar4 = FUN_0021fea0();
      puVar2[0x79] = cVar14;
      puVar2[0x7a] = uVar3;
      puVar2[0x78] = bVar4 & 1;
      puVar2[0x7b] = uVar1;
    }
    lVar7 = FUN_002ba788(DAT_04c61168);
    uVar9 = FUN_002b449c(param_2,lVar7 + 0x88);
    if ((uVar9 & 1) != 0) {
      *(short *)(puVar2 + 0x60) = (short)uVar12;
      *(undefined2 *)(puVar2 + 0x62) = uVar13;
      *(int *)(puVar2 + 100) = *param_3;
      FUN_002b4460(param_2);
      bVar4 = FUN_0021fea0();
      puVar2[0x69] = cVar14;
      puVar2[0x6a] = uVar3;
      puVar2[0x68] = bVar4 & 1;
      puVar2[0x6b] = uVar1;
    }
  }
  plVar8 = *(long **)(param_1 + 600);
  if ((plVar8 != (long *)0x0) && ((param_4 & 1) != 0)) {
    uVar6 = FUN_002b43fc(param_2);
    (**(code **)(*plVar8 + 0x28))(plVar8,uVar6,*param_3 == 0,uVar12 & 0xffffffff);
  }
  return;
}

