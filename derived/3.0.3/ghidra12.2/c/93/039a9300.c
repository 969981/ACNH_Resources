
void FUN_039a9300(long param_1,long param_2,long *param_3,short *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *local_70;
  long local_68;
  
  puVar14 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x38) + (long)*param_4 * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if ((puVar14 != (undefined8 *)0x0) &&
     (uVar8 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb3488), (uVar8 & 1) != 0)) {
    plVar3 = (long *)(puVar14[0x24] + (long)param_4[1] * 0x80);
    lVar9 = *plVar3;
    if (*(char *)(lVar9 + 0x9d) != '\0') {
      uVar8 = 0;
      plVar1 = plVar3 + 0xb;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        local_68 = *(long *)(*(long *)(lVar9 + 0x30) + uVar8 * 8) + 2;
        local_70 = puVar2;
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar9 = param_3[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (lVar9 == local_68) {
LAB_039a9494:
          lVar9 = *(long *)(param_2 + 0x88);
          uVar4 = *(undefined8 *)(param_2 + 0x90);
          lVar12 = *plVar1;
          lVar10 = uVar8 * 8;
          lVar13 = *(long *)(plVar3[10] + lVar10);
          *(long *)(plVar3[10] + lVar10) = lVar9;
          *(undefined8 *)(*plVar1 + lVar10) = uVar4;
          if (((code *)plVar3[0xf] != (code *)0x0) &&
             ((lVar13 != lVar9 || (*(long *)(lVar12 + lVar10) != *(long *)(*plVar1 + lVar10))))) {
            (*(code *)plVar3[0xf])(plVar3,uVar8 & 0xffffffff);
          }
        }
        else {
          uVar11 = 0;
          bVar6 = true;
          do {
            lVar9 = param_3[1] + 2 + uVar11;
            cVar5 = *(char *)(lVar9 + -2);
            if (cVar5 != *(char *)(local_68 + uVar11)) break;
            if (cVar5 == '\0') {
              if (bVar6) goto LAB_039a9494;
              break;
            }
            cVar5 = *(char *)(lVar9 + -1);
            if (cVar5 != *(char *)(local_68 + uVar11 + 1)) break;
            if (cVar5 == '\0') goto LAB_039a9494;
            cVar5 = *(char *)(param_3[1] + 2 + uVar11);
            if (cVar5 != *(char *)(local_68 + uVar11 + 2)) break;
            if (cVar5 == '\0') goto LAB_039a9494;
            bVar6 = uVar11 < 0x7fffe;
            uVar11 = uVar11 + 3;
          } while (uVar11 != 0x80001);
        }
        lVar9 = *plVar3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(byte *)(lVar9 + 0x9d));
    }
  }
  return;
}

