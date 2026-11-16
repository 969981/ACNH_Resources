
void FUN_0261e3e0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  undefined7 local_50;
  undefined4 uStack_49;
  
  if (param_2 != (undefined8 *)0x0) {
    iVar7 = 0;
    uVar6 = 1;
    while( true ) {
      uVar3 = uVar6 - 1;
      uVar1 = (*(byte *)((long)param_2 + (ulong)(uVar3 >> 3)) >> (ulong)(uVar3 & 6) & 1) + iVar7;
      if (uVar6 == 0x53) break;
      uVar2 = uVar6 & 7;
      uVar6 = uVar6 + 2;
      iVar7 = (*(byte *)((long)param_2 + (ulong)(uVar3 >> 3)) >> (ulong)uVar2 & 1) + uVar1;
    }
    if (1 < uVar1) {
      iVar7 = 0;
      uVar6 = 0;
      bVar4 = *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1;
      local_50 = (undefined7)*param_2;
      uStack_49 = *(undefined4 *)((long)param_2 + 7);
      iVar8 = 0x1e;
      if (bVar4) {
        iVar8 = 0x14;
      }
      iVar9 = 100;
      if (bVar4) {
        iVar9 = 0x3c;
      }
      do {
        if ((*(byte *)((long)&local_50 + (ulong)(uVar6 >> 3)) >> (ulong)(uVar6 & 7) & 1) != 0) {
          iVar10 = 1;
          switch(uVar6) {
          case 0x1e:
            iVar10 = iVar9;
            break;
          default:
            iVar10 = 10;
            break;
          case 0x22:
            iVar10 = 0x3c;
            break;
          case 0x23:
            iVar10 = 0x28;
            break;
          case 0x24:
            iVar10 = 0x1e;
            break;
          case 0x3b:
            iVar10 = iVar8;
            break;
          case 0x41:
            break;
          }
          iVar7 = iVar10 + iVar7;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x53);
      puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar3 = puVar5[3];
      uVar6 = 0;
      iVar10 = 0;
      uVar1 = *puVar5 ^ *puVar5 << 0xb;
      *puVar5 = puVar5[1];
      puVar5[1] = puVar5[2];
      uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
      puVar5[2] = uVar3;
      puVar5[3] = uVar1;
      *param_2 = 0;
      *(undefined4 *)((long)param_2 + 7) = 0;
      do {
        uVar11 = (ulong)(uVar6 >> 3);
        uVar3 = 1 << (ulong)(uVar6 & 7);
        if ((uVar3 & *(byte *)((long)&local_50 + uVar11)) != 0) {
          iVar12 = 1;
          switch(uVar6) {
          case 0x1e:
            iVar12 = iVar9;
            break;
          default:
            iVar12 = 10;
            break;
          case 0x22:
            iVar12 = 0x3c;
            break;
          case 0x23:
            iVar12 = 0x28;
            break;
          case 0x24:
            iVar12 = 0x1e;
            break;
          case 0x3b:
            iVar12 = iVar8;
            break;
          case 0x41:
            break;
          }
          iVar10 = iVar10 + iVar12 * 100;
          if ((int)((ulong)uVar1 * (ulong)(uint)(iVar7 * 100) >> 0x20) + 1 <= iVar10) {
            *(byte *)((long)param_2 + uVar11) = *(byte *)((long)param_2 + uVar11) | (byte)uVar3;
            return;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x53);
    }
  }
  return;
}

