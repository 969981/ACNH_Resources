
void FUN_00332ed0(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  
  if (param_2 != (code *)0x0) {
    if (0 < *(int *)(param_1 + 0x98)) {
      lVar2 = 0;
      do {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x28) + lVar2 * 8);
        local_38 = 0xffffffffffffffff;
        (*param_2)(&local_38,*(undefined8 *)(lVar5 + 0x88),param_3);
        lVar2 = lVar2 + 1;
        *(undefined8 *)(lVar5 + 0x90) = local_38;
      } while (lVar2 < *(int *)(param_1 + 0x98));
    }
    iVar1 = *(int *)(param_1 + 0x44);
    if (0 < iVar1) {
      lVar5 = *(long *)(param_1 + 0x50);
      lVar2 = 0;
      do {
        if (0 < *(int *)(lVar5 + lVar2 * 0x38 + 4)) {
          lVar3 = 0;
          lVar4 = 0;
          do {
            lVar5 = *(long *)(lVar5 + lVar2 * 0x38 + 0x18) + lVar3;
            FUN_00333020(param_1,lVar5 + 0x48,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0xa40));
            FUN_00333020(param_1,lVar5 + 0x50,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0xa60));
            FUN_00333020(param_1,lVar5 + 0x58,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0xa80));
            lVar5 = *(long *)(param_1 + 0x50);
            lVar4 = lVar4 + 1;
            lVar3 = lVar3 + 0x430;
          } while (lVar4 < *(int *)(lVar5 + lVar2 * 0x38 + 4));
          iVar1 = *(int *)(param_1 + 0x44);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  return;
}

