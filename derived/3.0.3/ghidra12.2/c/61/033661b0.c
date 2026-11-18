
void FUN_033661b0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_68;
  undefined ***local_60;
  undefined **local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x38) == '\0') {
      iVar1 = *(int *)(lVar4 + 0x20);
      if (*(long *)(lVar4 + 0x28) != 0 && iVar1 == 1) {
        FUN_03f459a0(lVar4 + 0x18);
        iVar1 = *(int *)(lVar4 + 0x20);
      }
      if ((*(byte *)(lVar4 + 8) & 3) == 2 && iVar1 == 2) {
        FUN_038386d0((byte *)(lVar4 + 8));
        *(undefined1 *)(lVar4 + 0x38) = 1;
      }
    }
    else {
      local_3c = *(undefined4 *)(param_1 + 0x8a0);
      local_60 = &local_58;
      local_50 = 0;
      local_48 = 0;
      local_40 = 1;
      local_58 = &PTR_LAB_04b206d8;
      local_68 = 0;
      FUN_03838950(lVar4 + 8,&local_68);
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x38) == '\0') {
      iVar1 = *(int *)(lVar4 + 0x20);
      if ((*(long *)(lVar4 + 0x28) != 0) && (iVar1 == 1)) {
        FUN_03f459a0(lVar4 + 0x18);
        iVar1 = *(int *)(lVar4 + 0x20);
      }
      if (((*(byte *)(lVar4 + 8) & 3) == 2) && (iVar1 == 2)) {
        FUN_038386d0((byte *)(lVar4 + 8));
        *(undefined1 *)(lVar4 + 0x38) = 1;
      }
    }
    else {
      local_50 = 0;
      local_40 = 1;
      local_60 = &local_58;
      local_48 = 0;
      local_3c = 0;
      local_68 = 0;
      local_58 = &PTR_LAB_04b206d8;
      FUN_03838950(lVar4 + 8,&local_68);
    }
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  iVar1 = *DAT_05734ea0;
  if (iVar1 != 0) {
    lVar4 = *(long *)(DAT_05734ea0 + 2);
    iVar2 = 0;
    do {
      puVar3 = (undefined8 *)(lVar4 + (long)iVar2 * 0xc);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
    } while (iVar1 != iVar2);
  }
  return;
}

