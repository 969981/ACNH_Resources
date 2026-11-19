
void FUN_03af92d4(long param_1,long param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *local_70;
  char *pcStack_68;
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  lVar11 = lVar16 + (long)(int)param_3 * 0x23c0;
  if ((*(byte *)(param_1 + 0x1c) >> 3 & 1) != 0) {
    uVar2 = *(uint *)(lVar11 + 0x3c8);
    if (uVar2 != 0xffffffff) {
      lVar14 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
        uVar8 = uVar2 - *(ushort *)(lVar14 + 0x3da);
        if (*(uint *)(lVar14 + 0x368) <= uVar8) {
          uVar8 = 0;
        }
        if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar8 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
          goto LAB_03af93bc;
        }
      }
      if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
        uVar12 = 0x112;
        uVar13 = 0x12;
      }
      else {
        uVar12 = 0x111;
        uVar13 = 0x11;
      }
      if ((*(uint *)(lVar14 + 800) & 2) != 0) {
        uVar13 = uVar12;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar13);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_03af93bc:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  lVar15 = *(long *)PTR_DAT_04bbd510;
  pcStack_68 = "gsys::RenderBuffer::color(AA)";
  uVar4 = *(ushort *)(lVar11 + 0x3a8);
  sVar5 = *(short *)(lVar11 + 0x3b2);
  uVar6 = *(ushort *)(lVar11 + 0x3aa);
  uVar7 = *(undefined2 *)(lVar16 + (long)(int)param_3 * 0x23c0 + 0x140);
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar14 == 0) {
    iVar9 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar9 = (int)lVar14 + -1;
  }
  uVar1 = uVar6;
  if (sVar5 != 3) {
    uVar1 = 1;
  }
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar10 = FUN_03948e10(lVar15,param_2,lVar15 + (long)iVar9 * 0x290 + 0x10,&local_70,uVar7,1,uVar4,
                        uVar1,1,0,1,0,1,0,0,0);
  uVar3 = *(undefined1 *)(lVar11 + 0x42e);
  uVar7 = *(undefined2 *)(lVar11 + 0x42c);
  *(undefined8 *)(lVar16 + (long)(int)param_3 * 0x23c0 + 0x1ef8) = uVar10;
  FUN_01560750(lVar11 + 0x370,uVar10,uVar3,uVar7);
  return;
}

