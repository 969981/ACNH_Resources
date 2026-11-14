
undefined * FUN_017c1960(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  
  puVar3 = PTR_DAT_04bbe400;
  puVar5 = PTR_DAT_04bbe3f8;
  uVar8 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x400);
  if ((uVar8 < *(uint *)(param_1 + 0x3e0)) &&
     (puVar6 = *(uint **)(*(long *)(param_1 + 1000) + (long)(int)uVar8 * 8), puVar6 != (uint *)0x0))
  {
    if (*puVar6 == 0) {
LAB_017c1a78:
      uVar8 = 0;
    }
    else {
      cVar7 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(uint *)(puVar3 + 0x14);
          if (-1 < (int)uVar8) {
            if ((ushort *)((ulong)uVar8 + (long)puVar6) == (ushort *)0x0) goto LAB_017c1a78;
            uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar6);
            goto LAB_017c1a7c;
          }
          if (uVar8 != 0xffffffff) goto LAB_017c1a78;
        }
        puVar9 = (uint *)(ulong)*puVar6;
        uVar8 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar9)) goto LAB_017c1a7c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) goto LAB_017c1a78;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
        uVar8 = 0;
        if (uVar10 == 0) goto LAB_017c1a7c;
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != -0x6b878a23) {
          piVar4 = piVar4 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            uVar8 = 0;
            goto LAB_017c1a7c;
          }
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        *(int *)(puVar3 + 0x14) = iVar1;
      } while (*puVar6 != 0);
      uVar8 = 0;
    }
LAB_017c1a7c:
    uVar8 = uVar8 - *(ushort *)(param_1 + 0x1000);
    if ((uVar8 < *(uint *)(param_1 + 0xfe0)) &&
       (puVar6 = *(uint **)(*(long *)(param_1 + 0xfe8) + (long)(int)uVar8 * 8),
       puVar6 != (uint *)0x0)) {
      uVar8 = *puVar6;
      if (uVar8 == 0) {
LAB_017c1b74:
        puVar5 = (undefined *)0x0;
LAB_017c1b78:
        puVar3 = PTR_DAT_04c48408;
        if (puVar5 != (undefined *)0x0) {
          puVar3 = puVar5;
        }
        return puVar3;
      }
      cVar7 = DAT_05292fa4;
      do {
        if (cVar7 == '\0') {
          DAT_05292fa8 = -1;
          cVar7 = '\x01';
          uVar8 = *puVar6;
          DAT_05292fa4 = '\x01';
        }
        else {
          if (-1 < DAT_05292fa8) {
            puVar5 = (undefined *)((ulong)DAT_05292fa8._4_4_ + (long)puVar6);
            goto LAB_017c1b78;
          }
          if (DAT_05292fa8._4_4_ != 0xffffffff) goto LAB_017c1b74;
        }
        puVar9 = (uint *)(ulong)uVar8;
        puVar5 = (undefined *)0x0;
        if ((puVar9 == (uint *)0x0) || (puVar5 = (undefined *)0x0, puVar6 == puVar9))
        goto LAB_017c1b78;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
        puVar5 = (undefined *)0x0;
        if (lVar2 == 0) goto LAB_017c1b78;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        DAT_05292fa8 = CONCAT44(0xfffffffe,(undefined4)DAT_05292fa8);
        if (uVar10 == 0) goto LAB_017c1b74;
        piVar4 = (int *)(lVar2 + 4);
        while (piVar4[-1] != 0x4b9c4229) {
          piVar4 = piVar4 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_017c1b74;
        }
        iVar1 = 0;
        if (*piVar4 != -1) {
          iVar1 = *piVar4;
        }
        DAT_05292fa8 = CONCAT44(iVar1,(undefined4)DAT_05292fa8);
        uVar8 = *puVar6;
        if (uVar8 == 0) goto LAB_017c1b74;
      } while( true );
    }
  }
  return (undefined *)0x0;
}

