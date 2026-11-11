
void FUN_00471360(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  iVar2 = *(int *)((long)param_1 + 0xc);
  lVar4 = *param_1;
  uVar1 = iVar2 + 1;
  uVar5 = *(undefined8 *)PTR_PTR_04bd4d20;
  lVar3 = FUN_00422030(uVar5,0x18,param_2);
  *param_1 = lVar3;
  FUN_0043a4d0(lVar3,0xff,param_2 * 0x18);
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2 + -1;
  if (-1 < iVar2) {
    uVar6 = (ulong)uVar1;
    puVar7 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar7[-1] != -1) {
        FUN_00471240(param_1,*puVar7,puVar7[1]);
      }
      puVar7 = puVar7 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_004220c0(uVar5,lVar4,0x18,uVar1);
  return;
}

