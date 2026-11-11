
long * FUN_00422e00(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_90 = *param_3;
  uStack_88 = param_3[1];
  local_80 = param_3[2];
  uStack_78 = param_3[3];
  puVar6 = (uint *)((long)param_1 + 0xc);
  uVar7 = *puVar6 & 0x3fffffff;
  local_70 = local_90;
  uStack_68 = uStack_88;
  local_60 = local_80;
  uStack_58 = uStack_78;
  uVar3 = FUN_0043a0e0(*param_1,uVar7,uVar7 - 1,param_2,&local_90);
  puVar2 = PTR_DAT_048607c0;
  if (uVar7 <= uVar3) {
    do {
      if ((int)uVar3 < 0) {
        uVar7 = uVar7 * 2;
        if (uVar7 < 0x100) {
          uVar7 = 0xff;
        }
        iVar1 = uVar7 + 1;
        if ((*puVar6 & 0x3fffffff) <= uVar7) {
          lVar4 = FUN_00426720(puVar2,iVar1,1,*param_1,(int)param_1[1],puVar6);
          *param_1 = lVar4;
        }
        if (((int)param_1[1] <= (int)uVar7) || (iVar1 < (int)param_1[1])) {
          *(int *)(param_1 + 1) = iVar1;
        }
        puVar5 = (undefined1 *)(*param_1 + (ulong)uVar7);
      }
      else {
        iVar1 = uVar3 + 1;
        if ((int)(*puVar6 & 0x3fffffff) <= (int)uVar3) {
          lVar4 = FUN_00426720(puVar2,iVar1,1,*param_1,(int)param_1[1],puVar6);
          *param_1 = lVar4;
        }
        if (((int)param_1[1] <= (int)uVar3) || (iVar1 < (int)param_1[1])) {
          *(int *)(param_1 + 1) = iVar1;
        }
        puVar5 = (undefined1 *)(*param_1 + (long)(int)uVar3);
      }
      *puVar5 = 0;
      local_90 = *param_3;
      uStack_88 = param_3[1];
      local_80 = param_3[2];
      uStack_78 = param_3[3];
      uVar7 = *(uint *)((long)param_1 + 0xc) & 0x3fffffff;
      local_70 = local_90;
      uStack_68 = uStack_88;
      local_60 = local_80;
      uStack_58 = uStack_78;
      uVar3 = FUN_0043a0e0(*param_1,uVar7,uVar7 - 1,param_2,&local_90);
    } while (uVar7 <= uVar3);
  }
  iVar1 = uVar3 + 1;
  if ((int)(*puVar6 & 0x3fffffff) <= (int)uVar3) {
    lVar4 = FUN_00426720(PTR_DAT_048607c0,iVar1,1,*param_1,(int)param_1[1],puVar6);
    *param_1 = lVar4;
  }
  if (((int)param_1[1] <= (int)uVar3) || (iVar1 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined1 *)(*param_1 + (long)(int)uVar3) = 0;
  return param_1;
}

