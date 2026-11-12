
void FUN_00935980(long param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  uint *puVar11;
  byte local_48 [4];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(int *)(param_1 + 0x2fc) == param_2) {
    *(undefined4 *)(param_1 + 0x2fc) = DAT_04c9a0c8;
  }
  if (*(int *)(param_1 + 0x300) == param_2) {
    *(undefined4 *)(param_1 + 0x300) = DAT_04c9a0c8;
  }
  if (*(char *)(param_1 + 0x2f8) == '\0') {
    return;
  }
  FUN_02507c6c(local_48,1,1,1,0);
  bVar9 = local_48[0];
  if (7 < local_48[0]) {
    return;
  }
  while( true ) {
    plVar4 = DAT_0537d558;
    puVar3 = PTR_DAT_04bb5038;
    uVar8 = (ulong)bVar9;
    if ((*param_3 < 8) && (*param_3 == bVar9)) break;
    do {
      if (uVar8 == 7) {
        return;
      }
      uVar8 = uVar8 + 1;
      uVar7 = FUN_02507924(local_48,puVar3 + uVar8);
    } while ((uVar7 & 1) == 0);
    bVar9 = puVar3[uVar8];
    if (7 < bVar9) {
      return;
    }
    local_48[0] = bVar9;
  }
  lVar10 = *DAT_0537d558;
  bVar9 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar9 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
    if (7 < bVar9) {
      pbVar1 = (byte *)(lVar10 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      bVar2 = *(byte *)(lVar10 + 0x472);
      *(char *)(param_1 + 0x2f8) = *(char *)(param_1 + 0x2f8) + -1;
      if (bVar2 != bVar9) {
        if (*(byte *)(*plVar4 + 0x476) < 2) {
          return;
        }
        bVar9 = *param_3;
        local_44 = *(undefined4 *)(param_1 + 0x304);
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        local_48[0] = bVar9;
        uStack_40 = *(undefined4 *)(param_1 + 0x308);
        local_3c = FUN_0266d200();
        local_38 = 0;
        local_32 = 0;
        local_34 = 0xff01;
        if (DAT_04cf5ff8 < 0) {
          return;
        }
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04cf5ff8,&local_38,local_48,0x10,0);
        return;
      }
      goto LAB_00935a94;
    }
  }
  *(char *)(param_1 + 0x2f8) = *(char *)(param_1 + 0x2f8) + -1;
LAB_00935a94:
  FUN_0266d4c0(1);
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    bVar9 = *param_3;
    local_44 = *(undefined4 *)(param_1 + 0x304);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_48[0] = bVar9;
    uStack_40 = *(undefined4 *)(param_1 + 0x308);
    local_3c = FUN_0266d200();
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    if (-1 < DAT_04cf5ff8) {
      FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04cf5ff8,&local_38,local_48,0x10,0);
    }
  }
  cVar5 = FUN_0266d800(*(undefined4 *)(param_1 + 0x304));
  if ((cVar5 == '\0') &&
     (FUN_0266dfb0(*(undefined4 *)(param_1 + 0x304)), (*(byte *)(param_1 + 0x30c) & 1) == 0)) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0960);
        puVar11 = (uint *)&DAT_054f0958;
        if (iVar6 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar11 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar11 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_3 < 8) {
        puVar11 = puVar11 + (ulong)*param_3 * 2;
      }
    }
    *puVar11 = *puVar11 | 0x400;
  }
  return;
}

