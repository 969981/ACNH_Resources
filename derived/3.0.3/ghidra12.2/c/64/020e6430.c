
void FUN_020e6430(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long local_50;
  char *local_48;
  
  if (0xf < param_2) {
    return;
  }
  FUN_020e3ad0(&local_50);
  (**(code **)(local_50 + 0x18))(&local_50);
  (**(code **)(local_50 + 0x18))(&local_50);
  if (local_48 != "boc") {
    uVar8 = 0;
    bVar4 = true;
    do {
      if (local_48[uVar8] != (&DAT_040eeb6e)[uVar8]) break;
      if (local_48[uVar8] == '\0') {
        if (bVar4) goto LAB_020e6564;
        break;
      }
      bVar4 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x80001);
    if (((*local_48 != 'k') || (local_48[1] != 'p')) || (local_48[2] != 's')) {
      (**(code **)(local_50 + 0x18))(&local_50);
      (**(code **)(local_50 + 0x18))(&local_50);
      if (local_48 != "gstA") {
        if (*local_48 != 'g') {
LAB_020e6584:
          (**(code **)(local_50 + 0x18))(&local_50);
          (**(code **)(local_50 + 0x18))(&local_50);
          if (local_48 == "man") {
LAB_020e65f0:
            iVar6 = 2;
          }
          else {
            uVar8 = 0;
            bVar4 = true;
            do {
              if (local_48[uVar8] != (&DAT_040ee9d7)[uVar8]) break;
              if (local_48[uVar8] == '\0') {
                if (bVar4) goto LAB_020e65f0;
                break;
              }
              bVar4 = uVar8 < 0x80000;
              uVar8 = uVar8 + 1;
            } while (uVar8 != 0x80001);
            puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
            uVar1 = *puVar5 ^ *puVar5 << 0xb;
            uVar2 = puVar5[3];
            *puVar5 = puVar5[1];
            puVar5[1] = puVar5[2];
            uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
            puVar5[2] = uVar2;
            puVar5[3] = uVar1;
            iVar6 = 1 - ((int)uVar1 >> 0x1f);
          }
          goto LAB_020e6568;
        }
        lVar7 = 0;
        do {
          if ((lVar7 == 0x80000) || (lVar3 = lVar7 + 1, local_48[lVar3] != (&DAT_04071902)[lVar7]))
          goto LAB_020e6584;
          lVar7 = lVar7 + 1;
        } while (local_48[lVar3] != '\0');
      }
    }
  }
LAB_020e6564:
  iVar6 = 1;
LAB_020e6568:
  *(int *)(param_1 + (ulong)param_2 * 4 + 0x21c) = iVar6;
  return;
}

