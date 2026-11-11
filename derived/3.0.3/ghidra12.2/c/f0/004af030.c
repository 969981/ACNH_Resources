
/* WARNING: Type propagation algorithm not settling */

void FUN_004af030(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_190 [144];
  long local_100;
  long local_f8 [19];
  
  lVar1 = param_1 + 0x18;
  puVar8 = (uint *)FUN_0049c590(lVar1);
  if (puVar8 != (uint *)0x0) {
    do {
      iVar4 = FUN_0049c130(lVar1,puVar8);
      if (*(int *)(param_1 + 0x28) < iVar4) {
        *(int *)(param_1 + 0x28) = iVar4;
      }
      uVar7 = *puVar8;
      FUN_004ae4c0(param_2,"<type id=\"type%d\">");
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      if ((uVar7 >> 3 & 1) != 0) {
        if ((((byte)*puVar8 >> 3 & 1) == 0) ||
           (puVar9 = (undefined8 *)FUN_00426db0(puVar8,8), puVar9 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = *puVar9;
        }
        FUN_004225d0(local_f8,uVar14);
        FUN_00424200(local_f8,&DAT_0408a2b0,"&amp;",1);
        FUN_00424200(local_f8,&DAT_0409a096,&DAT_040f7eec,1);
        FUN_00424200(local_f8,&DAT_0407f901,&DAT_040a9bf5,1);
        FUN_00424200(local_f8,&DAT_040c7c06,"&quot;",1);
        FUN_00424200(local_f8,&DAT_0407fa97,"&apos;",1);
        FUN_004ae4c0(param_2,"<name value=\"%s\"/>",local_f8[0]);
        FUN_00422550(local_f8);
      }
      lVar15 = *(long *)(puVar8 + 2);
      if (lVar15 != 0) {
        uVar5 = FUN_0049c410(lVar1,lVar15);
        FUN_004225b0(local_f8);
        uVar14 = FUN_00427570(lVar15,local_f8,0,0);
        FUN_004ae4c0(param_2,"<%s id=\"type%u\" /> <!-- %s -->","parent",uVar5,uVar14);
        FUN_00422550(local_f8);
      }
      if ((uVar7 & 1) != 0) {
        if (((*puVar8 & 1) == 0) ||
           (puVar10 = (uint *)FUN_00426db0(puVar8,1), puVar10 == (uint *)0x0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar10;
        }
        FUN_004225b0(local_f8);
        FUN_004af730(puVar8,uVar6,local_f8);
        FUN_004ae4c0(param_2,"<format value=\"%u\"/> <!-- %s -->",uVar6,local_f8[0]);
        if ((uVar6 & 0x1f) == 3) {
          FUN_0049c410(lVar1,&DAT_04c124e8);
        }
        FUN_00422550(local_f8);
      }
      if ((uVar7 >> 1 & 1) != 0) {
        uVar11 = FUN_00428440(puVar8);
        if ((uVar11 & 0x1f) == 8) {
          FUN_00426e90(puVar8,1);
          uVar14 = FUN_00426d90(puVar8);
          uVar3 = FUN_0049c410(lVar1,uVar14);
        }
        else {
          uVar11 = FUN_00428440(puVar8);
          if ((uVar11 & 0x1f) != 6) goto LAB_004af32c;
          uVar14 = FUN_00426d90(puVar8);
          uVar3 = FUN_0049c130(lVar1,uVar14);
        }
        lVar15 = FUN_00426d90(puVar8);
        FUN_004225b0(local_f8);
        if (lVar15 == 0) {
          puVar12 = &DAT_04085431;
        }
        else {
          puVar12 = (undefined *)FUN_00427570(lVar15,local_f8,0,0);
        }
        FUN_004ae4c0(param_2,"<%s id=\"type%u\" /> <!-- %s -->","subtype",uVar3,puVar12);
        FUN_00422550(local_f8);
      }
LAB_004af32c:
      if ((uVar7 >> 4 & 1) != 0) {
        if ((((byte)*puVar8 >> 4 & 1) == 0) ||
           (puVar9 = (undefined8 *)FUN_00426db0(puVar8,0x10), puVar9 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = *puVar9;
        }
        FUN_004ae4c0(param_2,"<version value=\"%u\"/>",uVar14);
      }
      if ((uVar7 >> 0xf & 1) != 0) {
        lVar15 = FUN_004270a0(puVar8);
        uVar2 = *(ushort *)(lVar15 + 8);
        uVar11 = (ulong)uVar2;
        FUN_004ae4c0(param_2,"<parameters count=\"%d\">",uVar11);
        iVar4 = *(int *)(param_2 + 8) + 1;
        *(int *)(param_2 + 8) = iVar4;
        if (uVar2 != 0) {
          plVar16 = (long *)(lVar15 + 0x10);
          do {
            while (*(char *)plVar16[1] == 't') {
              uVar5 = FUN_0049c410(lVar1,*plVar16);
              lVar15 = *plVar16;
              FUN_004225b0(local_f8);
              if (lVar15 == 0) {
                puVar12 = &DAT_04085431;
              }
              else {
                puVar12 = (undefined *)FUN_00427570(lVar15,local_f8,0,0);
              }
              FUN_004ae4c0(param_2,"<%s id=\"type%u\" /> <!-- %s -->","typeparam",uVar5,puVar12);
              FUN_00422550(local_f8);
              uVar11 = uVar11 - 1;
              plVar16 = plVar16 + 2;
              if (uVar11 == 0) goto LAB_004af450;
            }
            FUN_004ae4c0(param_2,"<valueparam value=\"%u\"/>",(int)*plVar16);
            uVar11 = uVar11 - 1;
            plVar16 = plVar16 + 2;
          } while (uVar11 != 0);
LAB_004af450:
          iVar4 = *(int *)(param_2 + 8);
        }
        *(int *)(param_2 + 8) = iVar4 + -1;
        FUN_004ae4c0(param_2,"</parameters>");
      }
      if ((uVar7 >> 0x15 & 1) != 0) {
        if (((*(byte *)((long)puVar8 + 2) >> 5 & 1) == 0) ||
           (puVar9 = (undefined8 *)FUN_00426db0(puVar8,0x200000), puVar9 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = *puVar9;
        }
        FUN_004ae4c0(param_2,"<flags value=\"%u\"/>",uVar14);
      }
      if ((uVar7 >> 0x17 & 1) != 0) {
        puVar9 = (undefined8 *)FUN_00426db0(puVar8,0x800000);
        plVar16 = (long *)*puVar9;
        uVar7 = (int)*(short *)((long)plVar16 + 2) + (int)(short)*plVar16;
        uVar11 = (ulong)uVar7;
        if ((int)uVar7 < 1) {
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          uVar13 = uVar11;
          plVar17 = plVar16;
          do {
            plVar17 = plVar17 + 1;
            local_f8[0] = *plVar17;
            uVar6 = FUN_004290b0(local_f8);
            iVar4 = (~uVar6 & 1) + iVar4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        FUN_004ae4c0(param_2,"<fields count=\"%d\">",iVar4);
        iVar4 = *(int *)(param_2 + 8) + 1;
        *(int *)(param_2 + 8) = iVar4;
        if (0 < (int)uVar7) {
          do {
            plVar16 = plVar16 + 1;
            local_100 = *plVar16;
            uVar13 = FUN_004290b0(&local_100);
            if ((uVar13 & 1) == 0) {
              uVar5 = FUN_0049c410(lVar1,*(undefined8 *)(local_100 + 8));
              uVar14 = FUN_00427b40(&local_100);
              FUN_004225d0(local_f8,uVar14);
              FUN_00424200(local_f8,&DAT_0408a2b0,"&amp;",1);
              FUN_00424200(local_f8,&DAT_0409a096,&DAT_040f7eec,1);
              FUN_00424200(local_f8,&DAT_0407f901,&DAT_040a9bf5,1);
              FUN_00424200(local_f8,&DAT_040c7c06,"&quot;",1);
              FUN_00424200(local_f8,&DAT_0407fa97,"&apos;",1);
              FUN_004225b0(auStack_190);
              if (local_100 == 0) {
                puVar12 = &DAT_04085431;
              }
              else {
                puVar12 = (undefined *)FUN_00427570(local_100,auStack_190,0,0);
              }
              uVar7 = FUN_004290b0(&local_100);
              FUN_004ae4c0(param_2,
                           "<field name=\"%s\" typeid=\"type%d\" flags=\"%d\" /> <!-- %s -->",
                           local_f8[0],uVar5,uVar7 & 0xffffffcf | 0x20,puVar12);
              FUN_00422550(auStack_190);
              FUN_00422550(local_f8);
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          iVar4 = *(int *)(param_2 + 8);
        }
        *(int *)(param_2 + 8) = iVar4 + -1;
        FUN_004ae4c0(param_2,"</fields>");
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      FUN_004ae4c0(param_2,"</type>");
      uVar11 = FUN_004ae610(puVar8,0);
      if ((uVar11 & 1) != 0) {
        lVar15 = *(long *)(param_1 + 0x20);
        puVar9 = (undefined8 *)FUN_00426e90(puVar8,0x2000);
        if (puVar9 == (undefined8 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)*puVar9;
        }
        local_f8[0] = CONCAT44(local_f8[0]._4_4_,uVar5);
        FUN_00445cf0(lVar15 + 0x28,local_f8);
      }
      puVar8 = (uint *)FUN_0049c590(lVar1);
    } while (puVar8 != (uint *)0x0);
  }
  return;
}

