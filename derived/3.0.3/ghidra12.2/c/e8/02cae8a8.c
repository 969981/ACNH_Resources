
void FUN_02cae8a8(long param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x52c);
  if ((uVar1 & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0x514);
    bVar5 = *param_2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 == bVar5) {
      lVar6 = 0;
      puVar3 = (uint *)(param_1 + 0x52c);
      goto LAB_02caeaa8;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x84c);
  if ((uVar1 & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0x834);
    bVar5 = *param_2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 == bVar5) {
      puVar3 = (uint *)(param_1 + 0x84c);
      lVar6 = 1;
      goto LAB_02caeaa8;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xb6c);
  if ((uVar1 & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0xb54);
    bVar5 = *param_2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 == bVar5) {
      puVar3 = (uint *)(param_1 + 0xb6c);
      lVar6 = 2;
      goto LAB_02caeaa8;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xe8c);
  if ((uVar1 & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0xe74);
    bVar5 = *param_2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 == bVar5) {
      puVar3 = (uint *)(param_1 + 0xe8c);
      lVar6 = 3;
      goto LAB_02caeaa8;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x11ac);
  if ((uVar1 & 1) == 0) {
LAB_02cae9c8:
    uVar1 = *(uint *)(param_1 + 0x14cc);
    if ((uVar1 & 1) != 0) {
      bVar4 = *(byte *)(param_1 + 0x14b4);
      bVar5 = *param_2;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (bVar4 == bVar5) {
        lVar2 = 0x14cc;
        lVar6 = 5;
        goto LAB_02caeaa4;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x17ec);
    if ((uVar1 & 1) != 0) {
      bVar4 = *(byte *)(param_1 + 0x17d4);
      bVar5 = *param_2;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (bVar4 == bVar5) {
        lVar2 = 0x17ec;
        lVar6 = 6;
        goto LAB_02caeaa4;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x1b0c);
    if ((uVar1 & 1) != 0) {
      bVar4 = *(byte *)(param_1 + 0x1af4);
      bVar5 = *param_2;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (bVar4 == bVar5) {
        lVar2 = 0x1b0c;
        lVar6 = 7;
        goto LAB_02caeaa4;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x1e2c);
    if ((uVar1 & 1) == 0) {
      return;
    }
    bVar4 = *(byte *)(param_1 + 0x1e14);
    bVar5 = *param_2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 != bVar5) {
      return;
    }
    lVar2 = 0x1e2c;
    lVar6 = 8;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x1194);
    bVar5 = *param_2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (bVar4 != bVar5) goto LAB_02cae9c8;
    lVar2 = 0x11ac;
    lVar6 = 4;
  }
LAB_02caeaa4:
  puVar3 = (uint *)(param_1 + lVar2);
LAB_02caeaa8:
  *puVar3 = uVar1 & 0xffffffdf;
  *(undefined4 *)(param_1 + lVar6 * 800 + 0x518) = 0;
  return;
}

