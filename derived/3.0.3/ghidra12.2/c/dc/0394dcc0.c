
void FUN_0394dcc0(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined *__dest;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  
  if (param_1[0xe] != 0) {
    plVar8 = param_1 + 3;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puVar10 = (undefined *)param_1[4];
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    __dest = (undefined *)param_1[4];
    if (puVar10 == PTR_DAT_04c4b988) {
LAB_0394dd74:
      *(undefined4 *)(param_1 + 10) = 0xffffffff;
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      puVar10 = PTR_DAT_04c4b988;
      if (__dest != PTR_DAT_04c4b988) {
        (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
        lVar6 = 0;
        do {
          if (PTR_DAT_04c4b988[lVar6] == '\0') goto LAB_0394df38;
          if (PTR_DAT_04c4b988[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_0394df38;
          }
          if (PTR_DAT_04c4b988[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_0394df38;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_0394df38:
        iVar3 = (int)lVar6;
        if ((int)param_1[5] <= (int)lVar6) {
          iVar3 = (int)param_1[5] + -1;
        }
        memcpy(__dest,puVar10,(long)iVar3);
        __dest[iVar3] = 0;
        puVar5 = (undefined8 *)param_1[0xd];
        if (puVar5 == (undefined8 *)0x0) {
          return;
        }
        goto LAB_0394df08;
      }
    }
    else {
      uVar7 = 0;
      bVar2 = true;
      do {
        if (__dest[uVar7] != PTR_DAT_04c4b988[uVar7]) break;
        if (__dest[uVar7] == '\0') {
          if (bVar2) goto LAB_0394dd74;
          break;
        }
        bVar2 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      *(undefined4 *)(param_1 + 10) = 0xfffffffe;
      iVar3 = (**(code **)(*param_1 + 0x98))(param_1);
      if (0 < iVar3) {
        iVar9 = 0;
        do {
          plVar4 = (long *)(**(code **)(*param_1 + 0x90))(param_1,iVar9);
          (**(code **)(param_1[3] + 0x18))(plVar8);
          (**(code **)(param_1[3] + 0x18))(plVar8);
          lVar11 = param_1[4];
          (**(code **)(*plVar4 + 0x18))(plVar4);
          lVar6 = plVar4[1];
          if (lVar11 == lVar6) {
LAB_0394defc:
            *(int *)(param_1 + 10) = iVar9;
            break;
          }
          uVar7 = 0;
          bVar2 = true;
          do {
            lVar11 = param_1[4] + 2 + uVar7;
            cVar1 = *(char *)(lVar11 + -2);
            if (cVar1 != *(char *)(lVar6 + uVar7)) break;
            if (cVar1 == '\0') {
              if (bVar2) goto LAB_0394defc;
              break;
            }
            cVar1 = *(char *)(lVar11 + -1);
            if (cVar1 != *(char *)(lVar6 + uVar7 + 1)) break;
            if (cVar1 == '\0') goto LAB_0394defc;
            cVar1 = *(char *)(param_1[4] + 2 + uVar7);
            if (cVar1 != *(char *)(lVar6 + uVar7 + 2)) break;
            if (cVar1 == '\0') goto LAB_0394defc;
            bVar2 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar3);
      }
    }
    puVar5 = (undefined8 *)param_1[0xd];
    if (puVar5 != (undefined8 *)0x0) {
LAB_0394df08:
                    /* WARNING: Could not recover jumptable at 0x0394df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)(puVar5,param_1);
      return;
    }
  }
  return;
}

