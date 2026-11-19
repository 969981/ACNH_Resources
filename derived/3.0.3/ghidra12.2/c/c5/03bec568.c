
undefined8 FUN_03bec568(long param_1,char *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*param_2 != 'X') {
    return 0;
  }
  if (((param_2[1] == 'L') && (param_2[2] == 'N')) && (param_2[3] == 'K')) {
    iVar1 = *(int *)(param_2 + 8);
    iVar3 = (**(code **)(*param_3 + 0x40))(param_3);
    if (iVar1 == iVar3) {
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        uVar4 = *(undefined4 *)(param_1 + 8);
        puVar5 = *(undefined8 **)(param_1 + 0x20);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x20) = *puVar5;
        }
        puVar5[5] = 0;
        *(undefined4 *)(puVar5 + 6) = 0;
        *(undefined4 *)(puVar5 + 4) = 0;
        puVar5[0xd] = 0;
        *(undefined4 *)(puVar5 + 0xe) = 0;
        puVar5[0x11] = 0;
        *(undefined8 *)((long)puVar5 + 0x8d) = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        FUN_038aacd0((int *)(param_1 + 0x10),uVar4);
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 8) * 8) + 0x94)
            != '\0') {
          return 0;
        }
        uVar2 = *(uint *)(param_2 + 0x3c);
        puVar5 = (undefined8 *)(param_1 + 0x530);
        if (*(char *)(param_1 + 0x570) == '\0') {
          uVar4 = (**(code **)(*param_3 + 0x20))(param_3);
          FUN_03be7e90(puVar5,param_2 + (ulong)uVar2 * 8 + 0x48,uVar4,*(uint *)(param_3 + 0x87) & 1)
          ;
        }
        else {
          uStack_48 = *(undefined8 *)(param_1 + 0x570);
          uStack_58 = *(undefined8 *)(param_1 + 0x560);
          local_50 = *(undefined8 *)(param_1 + 0x568);
          uStack_68 = *(undefined8 *)(param_1 + 0x550);
          local_60 = *(undefined8 *)(param_1 + 0x558);
          uStack_78 = *(undefined8 *)(param_1 + 0x540);
          local_70 = *(undefined8 *)(param_1 + 0x548);
          local_88 = *puVar5;
          local_80 = *(undefined8 *)(param_1 + 0x538);
          uVar4 = (**(code **)(*param_3 + 0x20))(param_3);
          FUN_03be7e90(puVar5,param_2 + (ulong)uVar2 * 8 + 0x48,uVar4,*(uint *)(param_3 + 0x87) & 1)
          ;
          FUN_03be8040(puVar5,&local_88);
        }
        FUN_03bec920(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 8) * 8),
                     param_2,puVar5,param_3);
        iVar1 = *(int *)(param_1 + 8);
        *(int *)PTR_DAT_04bd2450 = *(int *)PTR_DAT_04bd2450 + 1;
        *(int *)(param_1 + 8) = iVar1 + 1;
        return 1;
      }
    }
    else {
      (**(code **)(*param_3 + 0x40))(param_3);
    }
  }
  return 0;
}

