
void FUN_00223ba0(undefined2 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  
  memset(param_1,0xff,0x390);
  *param_1 = 0x18;
  uVar3 = FUN_00225188();
  param_1[2] = uVar3;
  *(undefined4 *)(param_1 + 4) = 0x81c2506;
  param_1[0xe] = 0x301;
  *(undefined4 *)(param_1 + 8) = 0x51f05ff;
  *(undefined1 *)(param_1 + 0xf) = 4;
  uVar5 = nn::oe::GetDesiredLanguage();
  uVar4 = (uint)uVar5;
  uVar1 = uVar4 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar2 = uVar4 >> 0x10 & 0xff;
  uVar7 = (uint)(uVar5 >> 0x18) & 0xff;
  uVar9 = (uint)(uVar5 >> 0x20);
  uVar8 = uVar9 & 0xff;
  uVar9 = uVar9 >> 8 & 0xff;
  if (uVar5 >> 0x38 == 0) {
    pbVar10 = &DAT_0410da5f;
    lVar6 = 0;
    do {
      if (((uint)pbVar10[-3] == (uVar4 & 0xff)) &&
         (((uVar5 & 0xff) == 0 ||
          ((pbVar10[-2] == uVar1 &&
           ((uVar1 == 0 ||
            ((pbVar10[-1] == uVar2 &&
             ((uVar2 == 0 ||
              ((*pbVar10 == uVar7 &&
               (((uVar5 & 0xff000000) == 0 ||
                ((pbVar10[1] == uVar8 &&
                 (((uVar5 & 0xff00000000) == 0 ||
                  ((pbVar10[2] == uVar9 &&
                   ((uVar9 == 0 || ((ushort)pbVar10[3] == ((ushort)(uVar5 >> 0x30) & 0xff)))))))))))
               )))))))))))))) goto LAB_00223d30;
      lVar6 = lVar6 + 1;
      pbVar10 = pbVar10 + 8;
    } while (lVar6 != 0x12);
  }
  else {
    lVar6 = 0;
    pbVar10 = &DAT_0410da5f;
    do {
      if (((uint)pbVar10[-3] == (uVar4 & 0xff)) &&
         (((uVar5 & 0xff) == 0 ||
          ((pbVar10[-2] == uVar1 &&
           ((uVar1 == 0 ||
            ((pbVar10[-1] == uVar2 &&
             ((uVar2 == 0 ||
              ((*pbVar10 == uVar7 &&
               (((uVar5 & 0xff000000) == 0 ||
                ((pbVar10[1] == uVar8 &&
                 (((uVar5 & 0xff00000000) == 0 ||
                  ((pbVar10[2] == uVar9 &&
                   ((uVar9 == 0 || (pbVar10[3] == 0 && (uVar5 & 0xff000000000000) == 0))))))))))))))
             )))))))))) goto LAB_00223d30;
      lVar6 = lVar6 + 1;
      pbVar10 = pbVar10 + 8;
    } while (lVar6 != 0x12);
  }
LAB_00223d34:
  FUN_00223d50(param_1);
  *(undefined8 *)(param_1 + 0x1c4) = 0x5069614d;
  return;
LAB_00223d30:
  *(char *)(param_1 + 0x10) = (char)lVar6;
  goto LAB_00223d34;
}

