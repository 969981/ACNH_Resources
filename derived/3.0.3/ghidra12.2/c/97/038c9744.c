
undefined8 *
FUN_038c9744(long param_1,undefined8 param_2,long *param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (param_3 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar5 = (undefined8 *)(lVar6 + 8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0xa8);
    }
    param_3 = (long *)*puVar5;
    if (param_3 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  if (param_1 == 0) {
    uVar8 = (**(code **)(*param_3 + 0x80))(param_3,param_4);
  }
  else {
    uVar8 = param_1 + 7;
  }
  uVar8 = uVar8 & 0xfffffffffffffff8;
  if (0xe7 < uVar8) {
    uVar1 = -param_4;
    if (-1 < (int)param_4) {
      uVar1 = param_4;
    }
    if ((uVar1 & uVar1 - 1) == 0) {
      puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,uVar8,param_5 * param_4);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      iVar2 = -param_5;
      if ((int)param_3[0x11] != -1) {
        iVar2 = param_5;
      }
      if (iVar2 == 1) {
        FUN_038ca450(puVar5,param_2,param_3,puVar5,uVar8,1,param_6 & 1);
        puVar7 = puVar5;
      }
      else {
        puVar7 = (undefined8 *)((long)puVar5 + (uVar8 - 0xe8));
        FUN_038ca450(puVar7,param_2,param_3,puVar5,uVar8,iVar2,param_6 & 1);
      }
      *puVar7 = &PTR_LAB_04b64568;
      puVar7[0x1b] = 0;
      puVar7[0x1c] = 0;
      puVar5 = (undefined8 *)0x0;
      if ((*(uint *)(puVar7 + 0x1a) & 1) != 0) {
        puVar5 = puVar7 + 0x12;
        nn::os::LockMutex((MutexType *)(puVar7 + 0x16));
      }
      lVar6 = puVar7[6];
      lVar4 = lVar6 + 0xe8;
      lVar3 = puVar7[7];
      if (*(int *)(puVar7 + 0x11) != 1) {
        lVar4 = lVar6;
        lVar3 = puVar7[7] + -0xe8;
      }
      puVar7[0x1b] = lVar4;
      puVar7[0x1c] = lVar3 + lVar6;
      if (puVar5 != (undefined8 *)0x0) {
        nn::os::UnlockMutex((MutexType *)(puVar5 + 4));
      }
      (**(code **)(*param_3 + 0xd0))(param_3,puVar7);
      return puVar7;
    }
  }
  return (undefined8 *)0x0;
}

