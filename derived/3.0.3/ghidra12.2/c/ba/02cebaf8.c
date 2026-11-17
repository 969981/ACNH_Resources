
void FUN_02cebaf8(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  
  param_2[4] = *(undefined2 *)(param_1 + 0x75b54);
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 0x75b56);
  *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x75b57);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x75b58);
  param_2[8] = *(undefined2 *)(param_1 + 0x75b64);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x75b66);
  *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(param_1 + 0x75b67);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x75b68);
  *param_2 = *(undefined2 *)(param_1 + 0x75b44);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x75b46);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x75b47);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x75b48);
  param_2[0x14] = *(undefined2 *)(param_1 + 0x75ba4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x75ba6);
  *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0x75ba7);
  *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_1 + 0x75ba8);
  param_2[0x18] = *(undefined2 *)(param_1 + 0x75bb4);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x75bb6);
  *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(param_1 + 0x75bb7);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_1 + 0x75bb8);
  param_2[0x1c] = *(undefined2 *)(param_1 + 0x75bc4);
  *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x75bc6);
  *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(param_1 + 0x75bc7);
  *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(param_1 + 0x75bc8);
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 0x75b74);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      puVar4 = (undefined4 *)(param_2 + 0xe);
      param_2[0xc] = *(undefined2 *)(param_1 + 0x75b74);
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x75b76);
      *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x75b77);
      puVar3 = (undefined4 *)(param_1 + 0x75b78);
      goto LAB_02cebc88;
    }
  }
  puVar4 = (undefined4 *)(param_2 + 0x12);
  param_2[0xc] = *(undefined2 *)(param_1 + 0x75b84);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x75b86);
  *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(param_1 + 0x75b87);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x75b88);
  param_2[0x10] = *(undefined2 *)(param_1 + 0x75b94);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x75b96);
  *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(param_1 + 0x75b97);
  puVar3 = (undefined4 *)(param_1 + 0x75b98);
LAB_02cebc88:
  *puVar4 = *puVar3;
  param_2[0x20] = *(undefined2 *)(param_1 + 0x75bd4);
  *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x75bd6);
  *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(param_1 + 0x75bd7);
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x75bd8);
  return;
}

