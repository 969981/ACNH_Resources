
void FUN_003bf650(long param_1,int *param_2,ulong param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *(char *)(param_1 + 0x3d0) = (char)param_2[1];
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 8);
  uVar4 = param_3;
  if (*param_2 == 2) {
    uVar4 = (param_3 / 0xe) * 0xe;
  }
  if (0 < (long)param_3) {
    param_3 = uVar4;
  }
  uVar5 = *(uint *)(*(long *)(param_1 + 400) + 0x1c4);
  if (0 < (int)uVar5) {
    lVar11 = 0;
    lVar12 = 0;
    iVar9 = 0;
    puVar13 = (undefined2 *)((long)param_2 + 0x66);
    do {
      lVar7 = param_1 + lVar12;
      puVar1 = (undefined2 *)(lVar7 + 0x2c0);
      uVar10 = *(undefined8 *)(puVar13 + -0x1b);
      puVar2 = (undefined2 *)(lVar7 + 0x340);
      if (*param_2 == 2) {
        local_80 = *(undefined8 *)(puVar13 + -0x15);
        uStack_78 = *(undefined8 *)(puVar13 + -0x11);
        local_70 = *(undefined8 *)(puVar13 + -0xd);
        uStack_68 = *(undefined8 *)(puVar13 + -9);
        if (param_3 == 0) {
          *puVar1 = puVar13[-5];
          *(undefined2 *)(lVar7 + 0x2c2) = puVar13[-4];
          *(undefined2 *)(lVar7 + 0x2c4) = puVar13[-3];
          cVar6 = (char)param_2[1];
        }
        else if ((param_4 & 1) == 0) {
          *puVar1 = puVar13[-5];
          *(undefined2 *)(lVar7 + 0x2c2) = puVar13[-4];
          *(undefined2 *)(lVar7 + 0x2c4) = puVar13[-3];
          FUN_003c2d10(puVar1,&local_80,param_3,uVar10);
          cVar6 = (char)param_2[1];
        }
        else {
          *puVar1 = 0;
          *(undefined4 *)(lVar7 + 0x2c2) = 0;
          cVar6 = (char)param_2[1];
        }
        if (cVar6 != '\0') {
          *puVar2 = puVar13[-2];
          *(undefined2 *)(lVar7 + 0x342) = puVar13[-1];
          *(undefined2 *)(lVar7 + 0x344) = *puVar13;
        }
        FUN_003c2cec(*(undefined8 *)(param_1 + 400),iVar9,&local_80);
      }
      lVar3 = param_1 + lVar11;
      *(undefined8 *)(lVar3 + 0x1a0) = uVar10;
      lVar7 = lVar3 + 0x1a0;
      *(long *)(lVar3 + 0x1a8) = (long)*(int *)(puVar13 + -0x17);
      *(ulong *)(lVar3 + 0x1b8) = param_3;
      uVar8 = *(undefined8 *)(param_2 + 6);
      *(undefined1 *)(lVar3 + 0x1d0) = 0;
      *(undefined8 *)(lVar3 + 0x1b0) = uVar8;
      if (*param_2 != 2) {
        puVar1 = (undefined2 *)0x0;
      }
      *(undefined2 **)(lVar3 + 0x1c0) = puVar1;
      if ((char)param_2[1] == '\0') {
        uVar10 = *(undefined8 *)(param_1 + 400);
      }
      else {
        *(undefined8 *)(lVar3 + 0x1e0) = uVar10;
        uVar10 = *(undefined8 *)(param_1 + 400);
        *(long *)(lVar3 + 0x1e8) = (long)*(int *)(puVar13 + -0x17);
        *(undefined8 *)(lVar3 + 0x1f8) = *(undefined8 *)(param_1 + 0x3c0);
        *(undefined8 *)(lVar3 + 0x1f0) = *(undefined8 *)(param_2 + 6);
        *(undefined1 *)(lVar3 + 0x210) = 1;
        if (*param_2 != 2) {
          puVar2 = (undefined2 *)0x0;
        }
        *(undefined2 **)(lVar3 + 0x200) = puVar2;
        FUN_003c2ca8(uVar10,iVar9,lVar7,0);
        uVar10 = *(undefined8 *)(param_1 + 400);
        lVar7 = lVar3 + 0x1e0;
      }
      FUN_003c2ca8(uVar10,iVar9,lVar7,1);
      lVar11 = lVar11 + 0x80;
      iVar9 = iVar9 + 1;
      puVar13 = puVar13 + 0x1c;
      lVar12 = lVar12 + 0x40;
    } while ((ulong)uVar5 << 7 != lVar11);
  }
  return;
}

