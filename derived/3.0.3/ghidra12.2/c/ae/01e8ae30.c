
void FUN_01e8ae30(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *__dest;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_1 + 8);
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x126f8) = 0;
  uVar3 = *(uint *)(lVar5 + 0x294);
  uVar2 = *(uint *)(lVar5 + 0x288) ^ *(uint *)(lVar5 + 0x288) << 0xb;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(lVar5 + 0x294) = uVar2;
  uVar4 = *(undefined4 *)(lVar5 + 0x290);
  *(uint *)(lVar5 + 0x290) = uVar3;
  *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
  *(undefined4 *)(lVar5 + 0x28c) = uVar4;
  lVar5 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x12840) = (int)(((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * 30.0 + 30.0);
  FUN_01e5a930(0x40000000,lVar5,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,PTR_DAT_04bc1600,
               6);
  __dest = *(char **)(lVar5 + 0x3b8);
  if (__dest != "CommonStandWait") {
    iVar1 = 0xf;
    if (*(int *)(lVar5 + 0x3c0) < 0x10) {
      iVar1 = *(int *)(lVar5 + 0x3c0) + -1;
    }
    memcpy(__dest,"CommonStandWait",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(undefined4 *)(lVar5 + 0x3a0) = 0;
  *(undefined1 *)(lVar5 + 0x410) = 0;
  if (0 < *(int *)(param_1 + 0x12780)) {
    lVar5 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x12790);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x12788) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar7 = puVar6;
      *(undefined8 **)(param_1 + 0x12790) = puVar7;
      puVar6 = puVar7;
    } while (lVar5 < *(int *)(param_1 + 0x12780));
  }
  *(undefined4 *)(param_1 + 0x12780) = 0;
  FUN_01e8abe0(param_1);
  *(undefined1 *)(param_1 + 0x56e8) = 1;
  *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) | 0x40;
  return;
}

