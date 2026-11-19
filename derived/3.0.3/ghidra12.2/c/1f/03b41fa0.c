
void FUN_03b41fa0(undefined4 param_1,long param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  
  if ((((*(long *)(param_2 + 0x40) != 0) && (*(long *)(*(long *)(param_2 + 0x40) + 8) != 0)) &&
      (pcVar9 = *(char **)(DAT_05aebb78 + 0x90), pcVar9 != (char *)0x0)) && (*pcVar9 != '\0')) {
    (**(code **)(*param_3 + 0x18))(param_3);
    (**(code **)(*param_3 + 0x18))(param_3);
    if ((char *)param_3[1] == "FinalMix") {
LAB_03b42070:
      lVar10 = *(long *)(param_2 + 0x40);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
        *(undefined4 *)(lVar10 + 0x10) = param_1;
      }
    }
    else {
      uVar7 = 0;
      bVar4 = true;
      do {
        cVar3 = ((char *)param_3[1])[uVar7];
        if (cVar3 != "FinalMix"[uVar7]) break;
        if (cVar3 == '\0') {
          if (bVar4) goto LAB_03b42070;
          break;
        }
        bVar4 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      if (*pcVar9 != '\0') {
        for (lVar10 = *(long *)(pcVar9 + 0x198); lVar10 != 0; lVar10 = *(long *)(lVar10 + lVar8)) {
          (**(code **)(*param_3 + 0x18))(param_3);
          (**(code **)(*param_3 + 0x18))(param_3);
          pbVar11 = (byte *)param_3[1];
          (**(code **)(*(long *)(lVar10 + 0x20) + 0x18))((long *)(lVar10 + 0x20));
          if (pbVar11 == *(byte **)(lVar10 + 0x28)) {
LAB_03b42124:
            uVar1 = *(uint *)(lVar10 + 0x30);
            if ((int)uVar1 < 0) {
              return;
            }
            puVar6 = *(uint **)(param_2 + 0x40);
            if (puVar6 == (uint *)0x0) {
              return;
            }
            if (*(long *)(puVar6 + 2) == 0) {
              return;
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0;
            }
            *(undefined4 *)(*(long *)(puVar6 + 2) + (ulong)uVar1 * 4) = param_1;
            return;
          }
          pbVar11 = *(byte **)(lVar10 + 0x28);
          pbVar5 = (byte *)param_3[1];
          lVar8 = 0x7ffff;
          while( true ) {
            bVar2 = *pbVar5;
            if (bVar2 != *pbVar11) break;
            if ((bVar2 == 0) ||
               (bVar4 = lVar8 == 0, pbVar11 = pbVar11 + 1, pbVar5 = pbVar5 + 1, lVar8 = lVar8 + -1,
               bVar4)) goto LAB_03b42124;
          }
          lVar8 = 8;
          if (*pbVar11 <= bVar2) {
            lVar8 = 0x10;
          }
        }
      }
    }
  }
  return;
}

