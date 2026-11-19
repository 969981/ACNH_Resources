
void FUN_03a4e420(long *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_70;
  undefined8 *local_68;
  
  lVar7 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    local_68 = &DAT_0407ebb1;
    plVar6 = param_1 + lVar7 * 10 + 0xb62d;
    local_70 = puVar1;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    puVar8 = (undefined8 *)param_1[lVar7 * 10 + 0xb62e];
    (**(code **)(local_70 + 0x18))(&local_70);
    if (puVar8 != local_68) {
      uVar5 = 0;
      bVar3 = true;
      do {
        lVar4 = param_1[lVar7 * 10 + 0xb62e] + 2 + uVar5;
        cVar2 = *(char *)(lVar4 + -2);
        if (cVar2 != *(char *)((long)local_68 + uVar5)) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_03a4e490;
          break;
        }
        cVar2 = *(char *)(lVar4 + -1);
        if (cVar2 != *(char *)((long)local_68 + uVar5 + 1)) break;
        if (cVar2 == '\0') goto LAB_03a4e490;
        cVar2 = *(char *)(param_1[lVar7 * 10 + 0xb62e] + 2 + uVar5);
        if (cVar2 != *(char *)((long)local_68 + uVar5 + 2)) break;
        if (cVar2 == '\0') goto LAB_03a4e490;
        bVar3 = uVar5 < 0x7fffe;
        uVar5 = uVar5 + 3;
      } while (uVar5 != 0x80001);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar9 = param_1[lVar7 * 10 + 0xb62e];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = param_2[1];
      if (lVar9 == lVar4) {
LAB_03a4e480:
        *(undefined1 *)((long)param_1 + lVar7 * 0x2d78 + 0x1149) = 0;
      }
      else {
        uVar5 = 0;
        bVar3 = true;
        do {
          lVar9 = param_1[lVar7 * 10 + 0xb62e] + 2 + uVar5;
          cVar2 = *(char *)(lVar9 + -2);
          if (cVar2 != *(char *)(lVar4 + uVar5)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_03a4e480;
            break;
          }
          cVar2 = *(char *)(lVar9 + -1);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 1)) break;
          if (cVar2 == '\0') goto LAB_03a4e480;
          cVar2 = *(char *)(param_1[lVar7 * 10 + 0xb62e] + 2 + uVar5);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 2)) break;
          if (cVar2 == '\0') goto LAB_03a4e480;
          bVar3 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
      }
    }
LAB_03a4e490:
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x20) {
      FUN_03964240(&local_70,param_1[0xb8cb]);
      (**(code **)(*param_1 + 0x50))(param_1,local_70);
      return;
    }
  } while( true );
}

