
undefined8 * FUN_0081f790(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  undefined *local_50;
  char *local_48;
  
  if (DAT_04cd0220 != (undefined8 *)0x0) {
    return DAT_04cd0220;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar5 = malloc(0x38);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_0081f820;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
  }
LAB_0081f820:
  FUN_038c69f0(puVar5 + 3,param_1,3);
  *(undefined2 *)((long)puVar5 + 0x14) = 0;
  puVar5[3] = &PTR_FUN_04917a48;
  iVar9 = -1;
  DAT_04cd0218 = puVar5 + 3;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0xffffffff;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "SceneSelect";
  plVar4 = *(long **)PTR_DAT_04bb2640;
  iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,iVar9);
      pcVar10 = (char *)*puVar6;
      (**(code **)(local_50 + 0x18))(&local_50);
      if (pcVar10 == local_48) goto LAB_0081f96c;
      if (*pcVar10 == *local_48) {
        if (*pcVar10 == '\0') goto LAB_0081f96c;
        lVar8 = 0x7fffe;
        pcVar7 = local_48;
        while( true ) {
          if (pcVar10[1] != pcVar7[1]) break;
          if (pcVar10[1] == '\0') goto LAB_0081f96c;
          if (pcVar10[2] != pcVar7[2]) break;
          if (pcVar10[2] == '\0') goto LAB_0081f96c;
          if ((lVar8 == 0) || (cVar1 = pcVar10[3], cVar1 != pcVar7[3])) break;
          lVar8 = lVar8 + -3;
          pcVar7 = pcVar7 + 3;
          pcVar10 = pcVar10 + 3;
          if (cVar1 == '\0') goto LAB_0081f96c;
        }
      }
      iVar9 = iVar9 + 1;
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    } while (iVar9 < iVar2);
    iVar9 = -1;
  }
LAB_0081f96c:
  *(int *)(puVar5 + 2) = iVar9;
  DAT_04cd0220 = puVar5;
  return puVar5;
}

