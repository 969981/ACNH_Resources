
undefined8 FUN_0386f830(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined *local_70;
  long local_68;
  long local_48;
  
  if ((((param_1 != 0) && (param_4 != (undefined8 *)0x0)) && (*(char *)param_3[1] != '\0')) &&
     (*(char *)param_2[1] != '\0')) {
    plVar5 = *(long **)(param_1 + 0x58);
    local_48 = 0;
    if ((plVar5 != (long *)0x0) &&
       ((**(code **)(*plVar5 + 0x28))(plVar5,&local_48), lVar6 = local_48, local_48 != 0)) {
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      if ((char *)param_2[1] == "RootPane") {
LAB_0386f920:
        lVar6 = *(long *)(lVar6 + 0x18);
      }
      else {
        uVar8 = 0;
        bVar3 = true;
        do {
          cVar2 = ((char *)param_2[1])[uVar8];
          if (cVar2 != "RootPane"[uVar8]) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_0386f920;
            break;
          }
          bVar3 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
        lVar6 = FUN_03c9c9b0(lVar6,param_2,*(undefined8 *)(lVar6 + 0x18));
      }
      if (lVar6 != 0) {
        uVar4 = FUN_0037e5a8();
        if (uVar4 != 0) {
          uVar9 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          do {
            uVar8 = FUN_03c90410(&local_48,param_4,param_2,uVar9);
            if (((uVar8 & 1) != 0) && (puVar7 = (uint *)*param_4, puVar7 != (uint *)0x0)) {
              local_68 = 0;
              if (*puVar7 != 0) {
                local_68 = (long)puVar7 + (ulong)*puVar7;
              }
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar6 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar6 == local_68) {
                return 1;
              }
              uVar8 = 0;
              bVar3 = true;
              do {
                lVar6 = param_3[1] + 2 + uVar8;
                cVar2 = *(char *)(lVar6 + -2);
                if (cVar2 != *(char *)(local_68 + uVar8)) break;
                if (cVar2 == '\0') {
                  if (bVar3) {
                    return 1;
                  }
                  break;
                }
                cVar2 = *(char *)(lVar6 + -1);
                if (cVar2 != *(char *)(local_68 + uVar8 + 1)) break;
                if (cVar2 == '\0') {
                  return 1;
                }
                cVar2 = *(char *)(param_3[1] + 2 + uVar8);
                if (cVar2 != *(char *)(local_68 + uVar8 + 2)) break;
                if (cVar2 == '\0') {
                  return 1;
                }
                bVar3 = uVar8 < 0x7fffe;
                uVar8 = uVar8 + 3;
              } while (uVar8 != 0x80001);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar4);
        }
      }
    }
  }
  return 0;
}

