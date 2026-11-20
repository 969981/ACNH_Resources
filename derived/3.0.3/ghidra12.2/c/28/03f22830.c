
undefined8 * FUN_03f22830(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_48;
  char local_44;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((undefined1 *)param_2[1] != &DAT_040a8b8f) {
    uVar6 = 0;
    bVar2 = true;
    do {
      cVar1 = ((undefined1 *)param_2[1])[uVar6];
      if (cVar1 != (&DAT_040a8b8f)[uVar6]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_03f228d0;
        break;
      }
      bVar2 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((char *)param_2[1] != "Surround") {
      uVar6 = 0;
      bVar2 = true;
      do {
        cVar1 = ((char *)param_2[1])[uVar6];
        if (cVar1 != "Surround"[uVar6]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_03f22a00;
          break;
        }
        bVar2 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      if ((char *)param_2[1] == "Debug") {
LAB_03f22b30:
        local_48 = 0.0;
        local_44 = '\0';
        uVar6 = FUN_03b36b40(param_3,&local_48,&DAT_040747e2);
        fVar10 = local_48;
        if (((uVar6 & 1) != 0) && (local_44 == -0x2e)) {
          lVar7 = *(long *)PTR_DAT_04bb2698;
          if (lVar7 == 0) {
            puVar4 = malloc(0x10);
          }
          else {
            if (param_1 == (long *)0x0) {
              lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
              puVar4 = (undefined8 *)(lVar7 + 8);
              if (lVar3 != 0) {
                puVar4 = (undefined8 *)(lVar3 + 0xa8);
              }
              param_1 = (long *)*puVar4;
              if (param_1 == (long *)0x0) {
                puVar4 = (undefined8 *)0x0;
                goto LAB_03f22bf4;
              }
            }
            puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x10,8);
          }
LAB_03f22bf4:
          fVar8 = 1.0;
          if (fVar10 <= 1.0) {
            fVar8 = fVar10;
          }
          *puVar4 = &PTR_LAB_04ba83c8;
          fVar9 = -1.0;
          if (-1.0 <= fVar10) {
            fVar9 = fVar8;
          }
          *(float *)(puVar4 + 1) = fVar9;
          return puVar4;
        }
      }
      else {
        uVar6 = 0;
        bVar2 = true;
        do {
          cVar1 = ((char *)param_2[1])[uVar6];
          if (cVar1 != "Debug"[uVar6]) {
            return (undefined8 *)0x0;
          }
          if (cVar1 == '\0') {
            if (!bVar2) {
              return (undefined8 *)0x0;
            }
            goto LAB_03f22b30;
          }
          bVar2 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
      }
      return (undefined8 *)0x0;
    }
LAB_03f22a00:
    local_48 = 0.0;
    local_44 = '\0';
    uVar6 = FUN_03b36b40(param_3,&local_48,"FrontRatio");
    fVar10 = local_48;
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (local_44 != -0x2e) {
      return (undefined8 *)0x0;
    }
    local_48 = 0.0;
    local_44 = '\0';
    uVar6 = FUN_03b36b40(param_3,&local_48,"RearRatio");
    fVar8 = local_48;
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (local_44 != -0x2e) {
      return (undefined8 *)0x0;
    }
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      puVar4 = malloc(0x10);
    }
    else {
      if (param_1 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar4 = (undefined8 *)(lVar7 + 8);
        if (lVar3 != 0) {
          puVar4 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_1 = (long *)*puVar4;
        if (param_1 == (long *)0x0) {
          puVar4 = (undefined8 *)0x0;
          puVar5 = PTR_DAT_04bdf038;
          goto LAB_03f22c34;
        }
      }
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x10,8);
    }
    puVar5 = &DAT_04ba8428;
    goto LAB_03f22c34;
  }
LAB_03f228d0:
  local_48 = 0.0;
  local_44 = '\0';
  uVar6 = FUN_03b36b40(param_3,&local_48,"LRRatio");
  fVar10 = local_48;
  if ((uVar6 & 1) == 0) {
    return (undefined8 *)0x0;
  }
  if (local_44 != -0x2e) {
    return (undefined8 *)0x0;
  }
  local_48 = 0.0;
  local_44 = '\0';
  uVar6 = FUN_03b36b40(param_3,&local_48,"CenterRatio");
  fVar8 = local_48;
  if ((uVar6 & 1) == 0) {
    return (undefined8 *)0x0;
  }
  if (local_44 != -0x2e) {
    return (undefined8 *)0x0;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar7 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_1 = (long *)*puVar4;
      if (param_1 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_03f22be0;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x10,8);
  }
LAB_03f22be0:
  puVar5 = &DAT_04ba8348;
LAB_03f22c34:
  *(float *)(puVar4 + 1) = fVar10;
  *(float *)((long)puVar4 + 0xc) = fVar8;
  *puVar4 = puVar5 + 0x10;
  return puVar4;
}

