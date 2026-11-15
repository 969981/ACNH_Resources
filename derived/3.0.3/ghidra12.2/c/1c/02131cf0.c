
void FUN_02131cf0(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char *__dest;
  undefined *local_50;
  undefined8 uStack_48;
  byte local_40;
  undefined1 local_3f;
  int local_34;
  
  sVar5 = *(short *)(param_1[1] + 0x284);
  if (sVar5 == -1) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    puVar1 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar5 * 0x10;
    if (999 < (uint)(int)sVar5) {
      puVar1 = PTR_DAT_04bb6258;
    }
    uVar7 = *(undefined8 *)(puVar1 + 8);
  }
  lVar10 = *(long *)(param_1[1] + 0x3b0);
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar8 + 0x476)) {
    bVar4 = *(byte *)(lVar8 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      uVar9 = (long)(char)bVar4 & 0xffffffff;
      pbVar2 = (byte *)(lVar8 + 0x48) + uVar9 * 0x80;
      if (7 < bVar4) {
        pbVar2 = (byte *)(lVar8 + 0x48);
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar8 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
        lVar3 = lVar8 + uVar9 * 0xc;
        if (0xb < bVar4) {
          lVar3 = lVar8;
        }
        if (*(char *)(lVar3 + 10) == '\0') {
          iVar6 = 1;
          goto LAB_02131de4;
        }
      }
    }
  }
  local_3f = 0;
  local_40 = *PTR_DAT_04bb32e0;
  if (7 < local_40) {
    local_40 = 0xff;
  }
  local_50 = PTR_DAT_04bc2f40 + 0x10;
  uStack_48 = 0x11;
  iVar6 = FUN_022f1e1c(&local_50,uVar7);
  local_34 = iVar6;
LAB_02131de4:
  if (iVar6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x02131ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1);
    return;
  }
  if (iVar6 == 0) {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    *(undefined4 *)(param_1 + 2) = 1;
    local_34 = 0;
    FUN_01e5a930(0x40000000,lVar10,0xd,PTR_DAT_04bb2150,&local_50,&local_34,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar10 + 0x3b8);
    if (__dest != "CommonPitfallWobbling") {
      iVar6 = 0x15;
      if (*(int *)(lVar10 + 0x3c0) < 0x16) {
        iVar6 = *(int *)(lVar10 + 0x3c0) + -1;
      }
      memcpy(__dest,"CommonPitfallWobbling",(long)iVar6);
      __dest[iVar6] = '\0';
    }
    *(undefined4 *)(lVar10 + 0x3a0) = 0;
    *(undefined1 *)(lVar10 + 0x410) = 0;
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffeffff;
  }
  return;
}

