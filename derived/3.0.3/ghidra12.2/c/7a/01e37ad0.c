
void FUN_01e37ad0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x129) == '\0') {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x40);
  cVar4 = *(char *)(param_1 + 300);
  uVar3 = *(undefined4 *)(param_1 + 0x120);
  if (iVar2 <= iVar7) {
    if (0 < iVar7) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x44) + 1 < iVar2) {
        iVar1 = *(int *)(param_1 + 0x44) + 1;
      }
      *(int *)(param_1 + 0x44) = iVar1;
      *(int *)(param_1 + 0x48) = iVar7 + -1;
      iVar7 = iVar7 + -1;
    }
    if (iVar2 <= iVar7) goto LAB_01e37b60;
  }
  iVar1 = *(int *)(param_1 + 0x44) + iVar7;
  *(int *)(param_1 + 0x48) = iVar7 + 1;
  iVar7 = 0;
  if (iVar2 <= iVar1) {
    iVar7 = iVar2;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)(iVar1 - iVar7) * 0x14);
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = uVar3;
  *(undefined4 *)((long)puVar6 + 0xc) = 0;
  *(undefined2 *)(puVar6 + 2) = 0;
LAB_01e37b60:
  if (cVar4 != '\0') {
    local_24 = 0;
    if (*(int *)(param_1 + 0x120) == 1) {
      local_24 = 1;
    }
    else if (*(int *)(param_1 + 0x120) == 0) {
      local_24 = 0;
    }
    FUN_021dafb0(param_1 + 0xc,&local_24,0,0,0,1);
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44) + -1;
    iVar7 = 0;
    if (*(int *)(param_1 + 0x40) <= iVar2) {
      iVar7 = *(int *)(param_1 + 0x40);
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)(iVar2 - iVar7) * 0x14);
    *puVar5 = *(undefined4 *)(param_1 + 0x118);
    puVar5[1] = *(undefined4 *)(param_1 + 0x11c);
    puVar5[3] = *(undefined4 *)(param_1 + 0x124);
    *(undefined1 *)((long)puVar5 + 0x11) = 1;
  }
  *(undefined1 *)(param_1 + 0x129) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  return;
}

