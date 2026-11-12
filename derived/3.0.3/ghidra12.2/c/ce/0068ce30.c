
void FUN_0068ce30(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  plVar8 = (long *)(param_1[5] + (long)(int)param_1[0x11] * 0x30);
  lVar10 = *(long *)(*plVar8 + 0x40) + (long)*(int *)((long)param_1 + 0x8c) * 0x20;
  sVar3 = *(short *)(lVar10 + 0x1c);
  if (sVar3 != -1) {
    param_1[0xe] = param_2;
    iVar5 = FUN_0068d010();
    puVar1 = (undefined8 *)(param_1[7] + (long)iVar5 * 0x20);
    *puVar1 = plVar8;
    *(short *)((long)puVar1 + 0x14) = sVar3;
    *(undefined2 *)((long)puVar1 + 0x16) = 0xffff;
    *(short *)(puVar1 + 3) = (short)iVar5;
    *(undefined1 *)((long)puVar1 + 0x1a) = 2;
    plVar8 = puVar1 + 1;
    pcVar9 = (char *)((long)puVar1 + 0x1b);
    if ((*plVar8 != 0) && (*pcVar9 != '\0')) {
      FUN_0068c2b0();
      (**(code **)(*param_1 + 0x18))(param_1,*plVar8);
    }
    *plVar8 = 0;
    *pcVar9 = '\0';
    if (*(short *)(lVar10 + 0x1a) != 0) {
      lVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x40,0x10);
      if (lVar6 != 0) {
        FUN_0068c290(lVar6);
      }
      local_60 = param_1[1];
      lStack_58 = param_1[2];
      local_50 = param_1[3];
      lStack_48 = param_1[4];
      FUN_0068c3a0(lVar6,&local_60,lVar10);
      *plVar8 = lVar6;
      *pcVar9 = '\x01';
    }
    if ((char)param_1[0x12] == '\0') {
      uVar2 = *(uint *)(param_1 + 8);
      *(undefined2 *)(param_1 + 0x12) = 1;
      while (0 < (int)uVar2) {
        bVar4 = 0;
        uVar7 = 0;
        lVar10 = 0x1a;
        do {
          if (1 < *(byte *)(param_1[7] + lVar10)) {
            bVar4 = FUN_0068d480(param_1,uVar7 & 0xffffffff);
            bVar4 = bVar4 & 1 | *(char *)((long)param_1 + 0x91) != '\0';
            *(byte *)((long)param_1 + 0x91) = bVar4;
          }
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0x20;
        } while (uVar2 != uVar7);
        if (bVar4 == 0) break;
        uVar2 = *(uint *)(param_1 + 8);
        *(undefined1 *)((long)param_1 + 0x91) = 0;
      }
      *(undefined1 *)(param_1 + 0x12) = 0;
      return;
    }
    *(undefined1 *)((long)param_1 + 0x91) = 1;
  }
  return;
}

