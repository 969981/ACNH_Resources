
void FUN_002713d8(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04bc1510;
  if ((int)param_2[1] == 3) {
    lVar5 = *param_2;
    uVar1 = *(undefined1 *)(lVar5 + 1);
    plVar3 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar1);
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x40) == param_2[2])) &&
       (*(char *)(*(long *)(DAT_04c603c8 + 0x38) + 0x84) != '\0')) {
      FUN_00279e34(*(long *)(DAT_04c603c8 + 0x38),uVar1,*(char *)(lVar5 + 2) != '\0');
      *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)puVar2;
    }
  }
  return;
}

