
undefined8 FUN_003872c0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  void *__s;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar11 = *(undefined4 *)(param_2 + 0x24);
  uVar12 = *(undefined4 *)(param_2 + 0x28);
  uVar13 = *(undefined4 *)(param_2 + 0x2c);
  plVar2 = param_1 + 2;
  plVar6 = (long *)param_1[3];
  do {
    if (plVar6 == plVar2) {
LAB_00387320:
      plVar6 = (long *)FUN_00367b30(0x60);
      if (plVar6 != (long *)0x0) {
        plVar6[8] = 0;
        plVar6[9] = 0;
        plVar6[6] = 0;
        plVar6[7] = 0;
        plVar6[4] = 0;
        plVar6[5] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[10] = (long)(plVar6 + 10);
        plVar6[0xb] = (long)(plVar6 + 10);
      }
      FUN_00386f50(uVar11,uVar12,uVar13,plVar6,plVar6,param_2,1);
      if (*(float *)(plVar6 + 8) != *(float *)((long)plVar6 + 0x2c)) {
        *(float *)(plVar6 + 8) = *(float *)((long)plVar6 + 0x2c);
      }
      lVar4 = *plVar6;
      *plVar6 = *plVar2;
      *(long **)(lVar4 + 8) = plVar2;
      *(long **)(*plVar2 + 8) = plVar6;
      *plVar2 = lVar4;
      if (*(short *)(param_2 + 0x44) != 0) {
        uVar9 = 0;
        plVar6 = plVar6 + 10;
        do {
          lVar4 = *(long *)(param_2 + 0x38);
          plVar2 = (long *)FUN_00367b30(0x38);
          if (plVar2 != (long *)0x0) {
            plVar2[5] = 0;
            plVar2[6] = 0;
            plVar2[3] = 0;
            plVar2[4] = 0;
            *plVar2 = (long)plVar2;
            plVar2[1] = (long)plVar2;
          }
          *(undefined1 *)((long)plVar2 + 0x34) = 0;
          *(undefined4 *)(plVar2 + 6) = 0;
          plVar2[2] = lVar4 + uVar9 * 0x30;
          puVar10 = (ushort *)(lVar4 + uVar9 * 0x30 + 0x28);
          if ((ulong)*puVar10 == 0) {
            plVar2[3] = 0;
            uVar5 = (ulong)*puVar10;
          }
          else {
            __n = (ulong)*puVar10 << 3;
            __s = (void *)FUN_00367b30(__n);
            if (__s != (void *)0x0) {
              memset(__s,0,__n);
            }
            plVar2[3] = (long)__s;
            uVar5 = (ulong)*puVar10;
            if (*puVar10 != 0) {
              lVar7 = 0;
              uVar8 = 0;
              do {
                uVar3 = (**(code **)(**(long **)(*(long *)*param_1 + 0x18) + 0x60))
                                  (*(long **)(*(long *)*param_1 + 0x18),
                                   *(long *)(lVar4 + uVar9 * 0x30 + 0x20) + lVar7,1);
                lVar7 = lVar7 + 0x24;
                *(undefined8 *)(plVar2[3] + uVar8 * 8) = uVar3;
                uVar8 = uVar8 + 1;
                uVar5 = (ulong)*puVar10;
              } while (uVar8 < uVar5);
            }
          }
          *(int *)(plVar2 + 4) = (int)uVar5;
          lVar4 = *plVar2;
          uVar9 = uVar9 + 1;
          *plVar2 = *plVar6;
          *(long **)(lVar4 + 8) = plVar6;
          *(long **)(*plVar6 + 8) = plVar2;
          *plVar6 = lVar4;
        } while (uVar9 < *(ushort *)(param_2 + 0x44));
      }
      return 1;
    }
    iVar1 = strcmp((char *)(plVar6 + 2),param_2);
    if (iVar1 == 0) {
      if (plVar6 != (long *)0x0) {
        return 0;
      }
      goto LAB_00387320;
    }
    plVar6 = (long *)plVar6[1];
  } while( true );
}

