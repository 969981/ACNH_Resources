
void FUN_01f9c378(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_34;
  
  param_1[0x1613] = 0;
  *(undefined4 *)((long)param_1 + 0x1203c) = 0x708;
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xfffffef2;
  if ((*(int *)(param_1[1] + 0x750) - 1U < 3) && (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 6))
  {
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if (lVar5 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar3 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    iVar3 = *(int *)(puVar6 + 7);
    if (((((DAT_05ac0a90 != iVar3) && (DAT_05ac0aa0 != iVar3)) && (DAT_05ac0ab0 != iVar3)) &&
        ((((DAT_05ac0ac0 != iVar3 && (DAT_05ac0ad0 != iVar3)) &&
          ((DAT_05ac0ae0 != iVar3 && ((DAT_05ac0af0 != iVar3 && (DAT_05ac0b00 != iVar3)))))) &&
         (DAT_05ac0b10 != iVar3)))) && (DAT_05ac0b20 != iVar3)) {
      *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x800000;
    }
  }
  param_1[0x15ab] = param_1[0x15ab] & 0xfffffffbffffffff;
  if ((int)param_1[0x15f1] == 1) {
    FUN_021e67f0(&local_58,param_1[1] + 0x3e0);
    *(undefined4 *)((long)param_1 + 0xae84) = local_58;
    *(undefined4 *)(param_1 + 0x15d1) = uStack_54;
  }
  FUN_01fc41e0(param_1);
  puVar2 = PTR_DAT_04bb4e28;
  *(undefined4 *)(param_1 + 0x2477) = 2;
  if ((((*(uint *)(&DAT_00001230 + *(long *)puVar2) >> 2 & 1) == 0) &&
      ((*(uint *)(&DAT_00001230 + *(long *)puVar2) >> 3 & 1) == 0)) && ((param_3 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xf0f) = 1;
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
  }
  else if ((param_2 & 1) == 0) {
    local_58 = 0;
    local_34 = 0;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,&local_58,&local_34,PTR_DAT_04bc1600,6);
  }
  else {
    (**(code **)(*param_1 + 0x538))(param_1);
    lVar5 = param_1[3];
    uVar4 = FUN_02085a50(lVar5,1,0);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x801) = 1;
      lVar1 = lVar5 + 0x10 + (ulong)*(uint *)(lVar5 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar5 + 0x294)) {
        lVar1 = lVar5 + 0x10;
      }
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
  }
  return;
}

