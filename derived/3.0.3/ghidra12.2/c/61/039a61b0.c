
void FUN_039a61b0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  
  lVar7 = *(long *)PTR_DAT_04bbd510;
  lVar4 = nn::os::GetTlsValue(DAT_05ae7898);
  if (lVar4 == 0) {
    iVar3 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar3 = (int)lVar4 + -1;
  }
  if ((*(uint *)(lVar7 + (long)iVar3 * 0x290 + 0x298) & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x20) <= uVar2) {
      uVar2 = 0;
    }
    puVar8 = (undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar2 * 0xa0);
    *puVar8 = *param_2;
    puVar8[1] = param_2[1];
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_2 + 4);
    puVar8[6] = param_2[6];
    puVar8[7] = param_2[7];
    *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(param_2 + 10);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    uVar1 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)((long)puVar8 + 0x47) = *(undefined8 *)((long)param_2 + 0x47);
    *(undefined8 *)(puVar8 + 0xe) = uVar1;
    *(undefined8 *)(puVar8 + 0x10) = uVar6;
    *(undefined8 *)(puVar8 + 0xc) = uVar5;
    FUN_038fd1e0(puVar8 + 0x14);
    FUN_038fd2f0(puVar8 + 0x14,param_2 + 0x14);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    puVar8[0x26] = param_2[0x26];
    *(undefined8 *)(puVar8 + 0x24) = uVar5;
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar4 = (long)(int)uVar2;
    if ((int)uVar2 < *(int *)(param_1 + 0x14)) {
      if (*(uint *)(param_1 + 0x20) <= uVar2) {
        uVar2 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x18) + lVar4 * 8) =
           *(long *)(param_1 + 0x28) + (long)(int)uVar2 * 0xa0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  return;
}

