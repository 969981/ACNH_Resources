
int FUN_039fe460(long param_1,long param_2,int param_3,long *param_4,uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined *local_100;
  long local_f8;
  
  iVar7 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = (param_5 >> 1 ^ 0xffffffff) & 1;
  do {
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar9 = *(long **)(param_1 + 0xa0);
      plVar2 = plVar9 + *(int *)(param_1 + 0x98);
      do {
        lVar8 = *plVar9;
        local_f8 = *param_4 + 2;
        plVar10 = (long *)(lVar8 + 0x38);
        local_100 = puVar1;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        lVar11 = *(long *)(lVar8 + 0x40);
        (**(code **)(local_100 + 0x18))(&local_100);
        if (lVar11 == local_f8) {
LAB_039fe5f0:
          if (param_3 <= iVar7) {
            return iVar7;
          }
          plVar10 = (long *)(param_2 + (long)iVar7 * 0x10);
          if (uVar5 == 0) {
            FUN_0074fda4(&local_100,"%s_override",param_4[1] + 2);
            lVar8 = FUN_03ad3330(*plVar9,&local_100);
            *plVar10 = lVar8;
            *(undefined1 *)(param_2 + (long)iVar7 * 0x10 + 8) = 1;
          }
          else if (uVar5 == 1) {
            local_f8 = param_4[1] + 2;
            local_100 = PTR_DAT_04bb2020 + 0x10;
            lVar8 = FUN_03ad3330(*plVar9,&local_100);
            *plVar10 = lVar8;
            *(undefined1 *)(param_2 + (long)iVar7 * 0x10 + 8) = 0;
          }
          else {
            lVar8 = *plVar10;
          }
          if (lVar8 != 0) {
            iVar7 = iVar7 + 1;
          }
        }
        else {
          uVar6 = 0;
          bVar4 = true;
          lVar8 = *(long *)(lVar8 + 0x40) + 2;
          do {
            lVar11 = lVar8 + uVar6;
            cVar3 = *(char *)(lVar11 + -2);
            if (cVar3 != *(char *)(local_f8 + uVar6)) break;
            if (cVar3 == '\0') {
              if (bVar4) goto LAB_039fe5f0;
              break;
            }
            cVar3 = *(char *)(lVar11 + -1);
            if (cVar3 != *(char *)(local_f8 + uVar6 + 1)) break;
            if (cVar3 == '\0') goto LAB_039fe5f0;
            cVar3 = *(char *)(lVar8 + uVar6);
            if (cVar3 != *(char *)(local_f8 + uVar6 + 2)) break;
            if (cVar3 == '\0') goto LAB_039fe5f0;
            bVar4 = uVar6 < 0x7fffe;
            uVar6 = uVar6 + 3;
          } while (uVar6 != 0x80001);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar2);
    }
    bVar4 = uVar5 != 0;
    uVar5 = 1;
    if (bVar4) {
      return iVar7;
    }
  } while( true );
}

