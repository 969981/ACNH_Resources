
void FUN_0260ba40(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  char *pcVar10;
  
  *(int *)(param_1 + 1) = param_3;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_04a86e10;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  puVar3 = PTR_DAT_04bc3578;
  if (param_4 == (long *)0x0) {
    param_4 = (long *)*DAT_05b05628;
  }
  pcVar10 = (char *)(DAT_05554928 + 0xb1);
  if (*pcVar10 != '\0') {
    return;
  }
  uVar4 = (**(code **)(*(long *)**(undefined8 **)PTR_DAT_04bc3578 + 0x80))
                    ((long *)**(undefined8 **)PTR_DAT_04bc3578,8);
  lVar7 = DAT_05ae7600;
  if (uVar4 < 0x5000) goto LAB_0260bb7c;
  if (0 < param_3) {
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc((long)(param_3 << 3));
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar7 + 8);
        if (lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_4 = (long *)*puVar1;
        if (param_4 == (long *)0x0) goto LAB_0260bb74;
      }
      pvVar6 = (void *)(**(code **)(*param_4 + 0x30))(param_4,(long)(param_3 << 3),8);
    }
    if (pvVar6 != (void *)0x0) {
      param_1[4] = pvVar6;
      *(undefined4 *)(param_1 + 3) = 0;
      *(int *)((long)param_1 + 0x1c) = param_3;
      if ((*(long *)(param_2 + 8) != 0) && (*(char *)(DAT_05554928 + 0xb1) == '\0')) {
        lVar7 = FUN_03f29260(*(long *)(param_2 + 8),param_3,0x1c);
        if (lVar7 != 0) {
          iVar9 = 0;
          param_1[2] = lVar7;
          do {
            lVar5 = param_1[2];
            lVar7 = FUN_03f2a10c(0x1c,**(undefined8 **)puVar3,1);
            if (lVar7 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x38);
              uVar4 = (ulong)uVar2;
              if (0 < (int)uVar2) {
                plVar8 = *(long **)(lVar5 + 0x40);
                do {
                  if (*plVar8 == 0) {
                    *plVar8 = lVar7;
                    goto LAB_0260bc20;
                  }
                  plVar8 = plVar8 + 1;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              lVar7 = 0;
            }
LAB_0260bc20:
            if (*(int *)(param_1 + 3) < *(int *)((long)param_1 + 0x1c)) {
              *(long *)(param_1[4] + (long)*(int *)(param_1 + 3) * 8) = lVar7;
              *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
            }
            iVar9 = iVar9 + 1;
            if (iVar9 == param_3) {
              return;
            }
          } while( true );
        }
        *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
      }
      param_1[2] = 0;
    }
  }
LAB_0260bb74:
  pcVar10 = (char *)(DAT_05554928 + 0xb1);
LAB_0260bb7c:
  *pcVar10 = '\x01';
  return;
}

