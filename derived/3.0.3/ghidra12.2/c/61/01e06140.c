
void FUN_01e06140(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  byte *pbVar16;
  long *plVar17;
  undefined *local_70;
  long lStack_68;
  undefined *local_60;
  char *local_58;
  undefined4 local_50;
  undefined2 local_4c [10];
  undefined2 local_38;
  
  *param_1 = *(undefined8 *)(param_2 + 8);
  plVar17 = param_1 + 1;
  (**(code **)(*plVar17 + 0x38))(plVar17);
  puVar11 = PTR_DAT_04bb2020;
  local_38 = 0;
  local_4c[0] = 0;
  local_50 = 0xb;
  local_58 = (char *)local_4c;
  lVar14 = 0;
  local_60 = PTR_DAT_04bc0d30 + 0x10;
  lStack_68 = param_2 + 0x10;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*(char *)(param_2 + lVar14 + 0x10) == '\0') {
LAB_01e061f0:
      uVar13 = FUN_01df33d0(&local_60,&local_70,lVar14);
      if ((uVar13 & 1) != 0) {
        (**(code **)(local_60 + 0x18))(&local_60);
        uVar15 = 1;
        if (*(int *)(param_2 + 0x3c) != 0) {
          uVar15 = 2;
        }
        FUN_01c120c0(plVar17,local_58,local_50,uVar15);
      }
      if (*(long *)(param_2 + 4000) == 9) {
        pbVar16 = *(byte **)(param_2 + 0xf90);
        bVar2 = *pbVar16;
        bVar3 = pbVar16[1];
        bVar4 = pbVar16[2];
        bVar5 = pbVar16[3];
        bVar6 = pbVar16[4];
        bVar7 = pbVar16[5];
        bVar8 = pbVar16[6];
        bVar9 = pbVar16[7];
        bVar10 = pbVar16[8];
        *(undefined2 *)(param_1 + 0x21) = 0;
        param_1[0x20] = 0;
        *(undefined2 *)((long)param_1 + 0x10a) = DAT_04cb6038;
        if ((((((bVar2 < 0x30) && (bVar3 < 0x10)) && (bVar4 < 0x34)) &&
             ((bVar5 < 0xc && (bVar6 < 3)))) && ((bVar7 < 4 && ((bVar8 < 3 && (bVar9 < 2)))))) &&
           (bVar10 < 0xc)) {
          *(byte *)(param_1 + 0x20) = bVar2;
          *(byte *)((long)param_1 + 0x101) = bVar3;
          *(byte *)((long)param_1 + 0x102) = bVar4;
          *(byte *)((long)param_1 + 0x103) = bVar5;
          *(byte *)((long)param_1 + 0x104) = bVar6;
          *(byte *)((long)param_1 + 0x105) = bVar7;
          *(byte *)((long)param_1 + 0x106) = bVar8;
          *(byte *)((long)param_1 + 0x107) = bVar9;
          *(byte *)(param_1 + 0x21) = bVar10;
        }
      }
      bVar2 = *(byte *)(param_2 + 0x40);
      local_60 = puVar11 + 0x10;
      local_58 = "CoordinatorGrade";
      iVar12 = FUN_02759600(&local_60);
      uVar1 = 0;
      if ((int)(uint)bVar2 <= iVar12) {
        uVar1 = *(undefined1 *)(param_2 + 0x3c);
      }
      *(undefined1 *)((long)param_1 + 0x10c) = uVar1;
      *(int *)(param_1 + 0x22) = (int)*(undefined8 *)(param_2 + 0x60);
      *(uint *)((long)param_1 + 0x114) = *(byte *)(param_2 + 0x41) & 0x1f;
      *(uint *)(param_1 + 0x23) = (uint)(*(byte *)(param_2 + 0x41) >> 5);
      return;
    }
    if (lVar14 == 0x28) {
      lVar14 = 0xffffffff;
      goto LAB_01e061f0;
    }
    if (*(char *)(param_2 + lVar14 + 0x11) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_01e061f0;
    }
    lVar14 = lVar14 + 2;
  } while( true );
}

