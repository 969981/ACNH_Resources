
void FUN_01f62d2c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x13678) == 1) {
    local_28 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_01e5a930(0x40000000,lVar5,0xd,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                 PTR_DAT_04bc1600,6);
    pcVar6 = *(char **)(lVar5 + 0x3b8);
    if (pcVar6 != "MaReCheering") {
      iVar3 = 0xc;
      if (*(int *)(lVar5 + 0x3c0) < 0xd) {
        iVar3 = *(int *)(lVar5 + 0x3c0) + -1;
      }
      memcpy(pcVar6,"MaReCheering",(long)iVar3);
      pcVar6[iVar3] = '\0';
    }
    *(undefined4 *)(lVar5 + 0x3a0) = 0;
    *(undefined1 *)(lVar5 + 0x410) = 0;
    lVar5 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar5 + 0x288);
    *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
    uVar2 = uVar2 ^ uVar2 << 0xb;
    *(undefined4 *)(lVar5 + 0x28c) = *(undefined4 *)(lVar5 + 0x290);
    uVar1 = *(uint *)(lVar5 + 0x294);
    *(uint *)(lVar5 + 0x290) = uVar1;
    lVar4 = 0x3c;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)(lVar5 + 0x294) = uVar2;
    iVar3 = 0x3c;
  }
  else {
    if (*(int *)(param_1 + 0x13678) == 0) {
      local_28 = 0;
      lVar5 = *(long *)(param_1 + 0x10);
      FUN_01e5a930(0x40000000,lVar5,0xd,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                   PTR_DAT_04bc1600,6);
      pcVar6 = *(char **)(lVar5 + 0x3b8);
      if (pcVar6 != "MaReClapping") {
        iVar3 = 0xc;
        if (*(int *)(lVar5 + 0x3c0) < 0xd) {
          iVar3 = *(int *)(lVar5 + 0x3c0) + -1;
        }
        memcpy(pcVar6,"MaReClapping",(long)iVar3);
        pcVar6[iVar3] = '\0';
      }
      *(undefined4 *)(lVar5 + 0x3a0) = 0;
      *(undefined1 *)(lVar5 + 0x410) = 0;
    }
    else {
      local_28 = 0;
      FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_28 + 4
                   ,&local_28,PTR_DAT_04bc1600,6);
    }
    lVar5 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar5 + 0x288);
    *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
    uVar2 = uVar2 ^ uVar2 << 0xb;
    *(undefined4 *)(lVar5 + 0x28c) = *(undefined4 *)(lVar5 + 0x290);
    uVar1 = *(uint *)(lVar5 + 0x294);
    *(uint *)(lVar5 + 0x290) = uVar1;
    lVar4 = 0x5a;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    *(uint *)(lVar5 + 0x294) = uVar2;
    iVar3 = 0x96;
  }
  *(int *)(param_1 + 0x13660) = iVar3 + (int)(lVar4 * (ulong)uVar2 >> 0x20);
  return;
}

