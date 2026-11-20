
long FUN_03d53e90(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  local_65 = 0;
  local_168 = 0x100;
  puStack_170 = local_164;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038d1270(&local_178,"%s.msbt",param_3[1]);
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    lVar6 = (long)*(int *)(param_1 + 0x1c);
    lVar5 = *(long *)(param_1 + 0x10) - lVar6;
    do {
      if (lVar5 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = param_2[1];
        (**(code **)(*(long *)(lVar5 + 0x58) + 0x18))((long *)(lVar5 + 0x58));
        lVar3 = *(long *)(lVar5 + 0x60);
        if (lVar7 == lVar3) {
LAB_03d53f40:
          lVar3 = FUN_03d54360(lVar5,&local_178);
          if (lVar3 != 0) {
            return lVar3;
          }
        }
        else {
          uVar4 = 0;
          bVar2 = true;
          do {
            lVar7 = param_2[1] + 2 + uVar4;
            cVar1 = *(char *)(lVar7 + -2);
            if (cVar1 != *(char *)(lVar3 + uVar4)) break;
            if (cVar1 == '\0') {
              if (bVar2) goto LAB_03d53f40;
              break;
            }
            cVar1 = *(char *)(lVar7 + -1);
            if (cVar1 != *(char *)(lVar3 + uVar4 + 1)) break;
            if (cVar1 == '\0') goto LAB_03d53f40;
            cVar1 = *(char *)(param_2[1] + 2 + uVar4);
            if (cVar1 != *(char *)(lVar3 + uVar4 + 2)) break;
            if (cVar1 == '\0') goto LAB_03d53f40;
            bVar2 = uVar4 < 0x7fffe;
            uVar4 = uVar4 + 3;
          } while (uVar4 != 0x80001);
        }
      }
      lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
    } while (lVar5 != (param_1 + 8) - lVar6);
  }
  return 0;
}

